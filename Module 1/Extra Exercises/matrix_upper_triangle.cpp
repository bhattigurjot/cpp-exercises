#include <iostream>

using namespace std;

void sequence(int n)
{
  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      if (i == j)
      {
        cout << "D ";
      }
      else if (j > i)
      {
        cout << "U ";
      }
      else
      {
        cout << "0 ";
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
    cout << "The upper traingle U diagonal D matrix :" << endl;
    sequence(n);
  }
}
