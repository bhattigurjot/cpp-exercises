#include <iostream>

using namespace std;

void InnerProduct(float x[], float y[], int n)
{
  float prod = 0.0f;
  float total = 0.0f;

  for (int i = 0; i < n; ++i)
  {
    prod = x[i] * y[i];
    total += prod;
  }

  cout << "inner Product = " << total << endl;
}

void printArray(float a[], int l)
{
  for (int i = 0; i < l; ++i)
  {
    cout << a[i] << ", ";
  }

  cout << endl;
}

int main()
{
  float s[] = { 1, 2, 3, 4 };
  float t[] = { 7, 8, 9, 0 };
  int m = sizeof(s) / sizeof(*s);
  int n = sizeof(t) / sizeof(*t);

  cout << "s = ";
  printArray(s, m);

  cout << "t = ";
  printArray(t, n);

  InnerProduct(s,t,n);
}
