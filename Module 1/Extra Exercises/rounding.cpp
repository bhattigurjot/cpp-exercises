#include <iostream>
#include <cmath>

using namespace std;

double Round(double x, int k);

int main()
{
  double x = 0.0;
  int k = 0;

  cout << "Enter the decimal number: ";
  cin >> x;
  cout << "Enter the value upto which Rounding should take place: ";
  cin >> k;

  cout << "The rounded value is: " << Round(x, k) << endl;
}

double Round(double x, int k)
{
  return floor(x*pow(10, k) + 0.5) / pow(10, k);
}
