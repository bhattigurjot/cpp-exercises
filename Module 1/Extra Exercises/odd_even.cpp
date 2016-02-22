#include <iostream>

using namespace std;

bool isOdd(int n)
{
  if (n % 2 == 0)
  return false;
  else
  return true;
}

bool isEven(int n)
{
  if (n % 2 == 0)
  return true;
  else
  return false;
}

int main()
{
  int x = 0;

  cout << "Enter the integer: ";
  cin >> x;

  bool b = false;

  b = isOdd(x);
  if (b)
  cout << "The entered no. is odd, tested with Odd function" << endl;
  else
  cout << "The entered no. is even, tested with Odd function" << endl;

  b = isEven(x);
  if (b)
  cout << "The entered no. is even, tested with Even function" << endl;
  else
  cout << "The entered no. is odd, tested with Odd function" << endl;

}
