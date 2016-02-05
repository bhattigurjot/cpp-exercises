#include<iostream>

using namespace std;

int factorial(int n);

int main()
{
  factorial(5);
  factorial(0);
  factorial(9);
  factorial(3);
}

int factorial(int n)
{
  /*
  Factorial with function
  */

  int inputNum = n;
  int fact = 1;

  while (inputNum != 0)
  {
    fact = fact*inputNum;
    --inputNum;
  }

  cout << n << "! = " << fact << endl;
}
