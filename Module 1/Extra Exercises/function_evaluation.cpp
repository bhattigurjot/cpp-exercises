#include <iostream>
#include <cmath>

using namespace std;

float f(float x);
void FuncEval(float(*f)(float), float arrayIn[], float arrayOut[], int n);

int main()
{
  float a = 0.0f;
  int n = 0;
  int i = 0;

  cout << "Input number of points = ";
  cin >> n;

  float* arrayIn = new float[n];
  float* arrayOut = new float[n];

  for (int i = 0; i < n; ++i)
  {
    cout << "Input point = ";
    cin >> a;
    arrayIn[i] = a;
  }

  cout << "x_i points:" << endl;
  for (int i = 0; i < n; ++i)
  {
    cout << arrayIn[i] << " ";
  }

  cout << endl;

  FuncEval(&f, arrayIn, arrayOut, n);

  cout << endl;

  delete[] arrayIn;
  delete[] arrayOut;
  arrayIn = 0;
  arrayOut = 0;
}

float f(float x)
{
  return sqrtf(x);
}

void FuncEval(float(*f)(float), float arrayIn[], float arrayOut[], int n)
{

  cout << "f(x_i) points: " << endl;
  for (int i = 0; i < n; ++i)
  {
    arrayOut[i] = f(arrayIn[i]);
    cout << arrayOut[i] << " ";
  }
}
