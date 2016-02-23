#include <iostream>

using namespace std;

void sequence(int n)
{
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if (((i+j) % 2) == 0)
      {
        cout << "0 ";
      }
      else
      {
        cout << "1 ";
      }
    }
    cout << endl;
  }
  cout << endl;
}

int main()
{
  int n = 0;

  cout << "Enter the integer number >= 2: ";
  cin >> n;

  if (n < 2)
  {
    cout << "You entered a number < 2" << endl;
  }
  else
  {
    cout << "The n X n matrix sequence :" << endl;
    sequence(n);
  }
}
