#include <iostream>

using namespace std;

void sequence(int n)
{
  for (int i = 1; i <= n; ++i)
  {
    if ((i % 2) == 0)
    {
      cout << "1 ";
    }
    else
    {
      cout << "0 ";
    }
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
    cout << "The sequence of size n is :" << endl;
    sequence(n);
  }
}
