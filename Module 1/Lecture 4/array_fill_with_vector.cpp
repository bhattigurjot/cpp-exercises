#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;

void RandomArrayFill(vector<int>& array);

int main()
{
  srand(time(0));

  vector<int> arr;
  int size = 0;
  cout << "Enter the size of an array to create: ";
  cin >> size;

  cout << "Creating array and filling it with random numbers... " << endl;
  arr.resize(size);
  RandomArrayFill(arr);
}

void RandomArrayFill(vector<int>& array)
{
  /*
  Random array filler function with vector
  */

  for (int i = 0; i < array.size(); ++i)
  array[i] = rand() % 100;

  cout << "Array = { ";
  for (int i = 0; i < array.size(); ++i)
  {
    if (i < array.size()-1)
    cout << array[i] << ", ";
    else
    cout << array[i] << " }" << endl;
  }
}
