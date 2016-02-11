#include<iostream>

using namespace std;

float Square(float x);

int main()
{
  float(*squarePointer)(float x) = Square;

  cout << "Square (2.0f) = " << squarePointer(2.0f) << endl;
}

float Square(float x)
{
  /*
  Square function
  */

  return x * x;
}
