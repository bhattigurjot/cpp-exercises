#include<iostream>

using namespace std;

int main()
{
  /*
  Factorial
  */

  int inputNum = 0;
  int factorial = 1;
  cout << "Enter a positive integer to compute the factorial of: ";
  cin >> inputNum;

  int number = inputNum;

  while (inputNum != 0)
  {
    factorial = factorial*inputNum;
    --inputNum;
  }

  cout << number << "! = " << factorial << endl;
}
