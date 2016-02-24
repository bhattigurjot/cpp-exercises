#include <iostream>

using namespace std;

void LineSpace(float a, float b, int n, float arrayOut[]);

int main()
{
  float a = 0.0f;
  float b = 0.0f;
  int n = 0;

  cout << "Enter an interval [a,b] and number of nodal points n." << endl;

  cout << "Input a = ";
  cin >> a;
  cout << "Input b = ";
  cin >> b;
  cout << "Input n = ";
  cin >> n;

  float* arrayOut = new float[n];

  LineSpace(a, b, n, arrayOut);

  delete[] arrayOut;
  arrayOut = 0;
}

void LineSpace(float a, float b, int n, float* arrayOut)
{
  float interval = 0.0f;
  interval = (b - a) / (n - 1);

  arrayOut[0] = a;

  for (int i = 1; i < n; ++i)
  {
    arrayOut[i] = arrayOut[i - 1] + interval;
  }

  for (int i = 0; i < n; ++i)
  {
    cout << arrayOut[i] << " ";
  }
}
