#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void RandomArrayFill(int* array, int size);

int main()
{
  srand(time(0));

  int size = 0;
  int *arr = new int[1000];
  cout << "Enter the size of an array to create: ";
  cin >> size;

  cout << "Creating array and filling it with random numbers... " << endl;
  RandomArrayFill(arr, size);
}

void RandomArrayFill(int* array, int size)
{
  /*
  Random array filler function
  */

  for (int i = 0; i < size; ++i)
  array[i] = rand() % 100;

  cout << "Array = { ";
  for (int i = 0; i < size; ++i)
  {
    if (i < (size-1))
    cout << array[i] << ", ";
    else
    cout << array[i] << " }" << endl;
  }
}
