#include <iostream>

using namespace std;

int main()
{
  int n = 0;
  int sum = 0;

  cout << "Enter the integer number >= 1: ";
  cin >> n;

  if (n < 1)
  {
    cout << "You entered a number < 1" << endl;
  }
  else
  {
    for (int i = 1; i <= n; ++i)
    {
      sum += i;
    }
    cout << "The sum from 1 to n is " << sum << endl;
  }
}
