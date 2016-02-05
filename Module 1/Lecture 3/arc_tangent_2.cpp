#include<iostream>
#include<cmath>

using namespace std;

void print(float x, float y);

float myArcTangent(float y, float x);

int main()
{
  print(2,4);
  print(-1,5);
  print(-6,-4);
  print(4,-6);
}

float myArcTangent(float y, float x)
{
  /*
  Tangent Calculation Function
  */

  float res = 0.0f;

  if ( (x >= 0 && y >= 0) || (x > 0 && y < 0))
  {
    // Quadrant 1 and 4
    res = atanf(y/x);
    cout << "1 or 4" << endl;

  }
  else if ( (x < 0 && y > 0) || (x < 0 && y < 0) )
  {
    // Quadrant 2 and 3
    res = atanf(y/x) + 180;
    cout << "2 or 3" << endl;
  }

  return res;
}

void print(float x, float y)
{
  /*
  Print Function
  */

  cout << "MyArcTangent (" << y << ", " << x << ") =" << myArcTangent(y,x) << endl;
}
