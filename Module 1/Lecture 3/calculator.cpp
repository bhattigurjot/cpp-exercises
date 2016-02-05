#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int option = 0;
  float x, y;
  x = y = 0.0f;
  bool exit = false;
  while (!exit)
  {
    cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), " <<
    "6) x^y, 7) ln(x), 8) e^x, 9) |x|, 10) floor(x), 11) ceil(x), 12) Exit.";
    cin >> option;
    switch (option)
    {
      case 1:
      cout << "Enter x: ";
      cin >> x;
      cout << "cos(x) = " << cos(x) << endl;
      break;
      case 2:
      cout << "Enter x: ";
      cin >> x;
      cout << "sin(x) = " << sin(x) << endl;
      break;
      case 3:
      cout << "Enter x: ";
      cin >> x;
      cout << "tan(x) = " << tan(x) << endl;
      break;
      case 4:
      cout << "Enter x: ";
      cin >> x;
      cout << "Enter y: ";
      cin >> y;
      cout << "atan2(y, x) = " << atan2(y, x) << endl;
      break;
      case 5:
      cout << "Enter x: ";
      cin >> x;
      cout << "sqrt(x) = " << sqrt(x) << endl;
      break;
      case 6:
      cout << "Enter x: ";
      cin >> x;
      cout << "Enter y: ";
      cin >> y;
      cout << "x^y = " << pow(x,y) << endl;
      break;
      case 7:
      cout << "Enter x: ";
      cin >> x;
      cout << "ln(x) = " << log(x) << endl;
      break;
      case 8:
      cout << "Enter x: ";
      cin >> x;
      cout << "e^x = " << exp(x) << endl;
      break;
      case 9:
      cout << "Enter x: ";
      cin >> x;
      cout << "|x| = " << fabs(x) << endl;
      break;
      case 10:
      cout << "Enter x: ";
      cin >> x;
      cout << "floor(x) = " << floor(x) << endl;
      break;
      case 11:
      cout << "Enter x: ";
      cin >> x;
      cout << "ceil(x) = " << ceil(x) << endl;
      break;
      case 12:
      cout << "Exiting..." << endl;
      exit = true;
      break;
    }
  }
}
