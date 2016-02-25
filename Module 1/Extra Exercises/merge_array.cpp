#include <iostream>

using namespace std;

void Merge(int s[], int t[], int out[], int m, int n)
{
  for (int i = 0; i < m; ++i)
  {
    out[i] = s[i];
  }
  for (int i = 0; i < n; ++i)
  {
    out[m+i] = t[i];
  }
}

void printArray(int a[], int l)
{
  for (int i = 0; i < l; ++i)
  {
    cout << a[i] << ", ";
  }

  cout << endl;
}

int main()
{
  int s[] = { 1, 2, 3, 4, 5, 6 };
  int t[] = { 7, 8, 9, 0 };
  int m = sizeof(s) / sizeof(*s);
  int n = sizeof(t) / sizeof(*t);

  int* r = new int[m+n];

  cout << "s = ";
  printArray(s, m);

  cout << "t = ";
  printArray(t, n);

  Merge(s,t,r,m,n);

  printArray(r, m+n);

  delete[] r;
  r = 0;
}
