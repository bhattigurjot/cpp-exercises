#include<iostream>

using namespace std;

int main()
{
  /*
  Average
  */

  int inputNum = 0;
  int val = 0;
  int sum = 0;
  cout << "Enter the number of values to average: ";
  cin >> inputNum;

  for (int i = 0; i < inputNum; ++i)
  {
    cout << "[" << i << "] = ";
    cin >> val;
    sum += val;
  }

  cout << "Average = " << sum/inputNum << endl;
}
