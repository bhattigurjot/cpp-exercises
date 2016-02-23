#include <iostream>
#include <cmath>

using namespace std;

int sum(int n)
{
  int result = 0;

  for (int i = 1; i <= n; ++i)
  {
    result += pow(-1, i - 1)*(i*i);
  }

  return result;
}

int main()
{
  int n = 0;


  cout << "Enter the integer number >= 1: ";
  cin >> n;

  if (n < 1)
  {
    cout << "You entered a number < 1" << endl;
  }
  else
  {
    cout << "The sum from 1 to pow(-1, i - 1)*(i*i) is " << sum(n) << endl;
  }
}
