#include <iostream>

using namespace std;

void mid(float x1, float y1, float x2, float y2)
{
  float mx, my;
  mx = my = 0.0f;

  mx = (x1 + x2) / 2;
  my = (y1 + y2) / 2;

  cout << "The mid point is (" << mx << ", " << my << ")" << endl;
}

int main()
{
  float x1, y1, x2, y2;
  x1 = y1 = x2 = y2 = 0.0f;

  cout << "Enter Point 1's x value: ";
  cin >> x1;
  cout << "Enter Point 1's x value: ";
  cin >> y1;
  cout << "Enter Point 2's x value: ";
  cin >> x2;
  cout << "Enter Point 2's y value: ";
  cin >> y2;

  mid(x1, y1, x2, y2);
}
