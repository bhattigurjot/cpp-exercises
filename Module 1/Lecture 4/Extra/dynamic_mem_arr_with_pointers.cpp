#include<iostream>

using namespace std;

void printArray(int* arr, int size);
int* ResizeArray(int *arr, int oldSize, int newSize);

int main()
{
  int* array = 0;
  int arraySize = 0;

  bool exit = false;
  while (!exit)
  {
    printArray(array, arraySize);

    int option = 0;
    int index = -1;
    int value = 0;
    int newSize = 0;

    cout <<
    "1) Set Element "
    "2) Resize Array "
    "3) Exit ";
    cin >> option;

    switch (option)
    {
      case 1:
      cout << "Index: ";
      cin >> index;

      if (index < 0 || index >= arraySize)
      cout << "Bad Index!" << endl;
      else
      {
        cout << "Enter Value: ";
        cin >> value;

        array[index] = value;
      }
      break;

      case 2:
      cout << "Enter Size: " << endl;
      cin >> newSize;
      array = ResizeArray(array, arraySize, newSize);
      arraySize = newSize;
      break;

      case 3:
      cout << "Exiting... " << endl;
      exit = true;
      break;
    }
  }

  delete[] array;
  array = 0;
}

void printArray(int* arr, int size)
{
  /*
  Print Array function
  */

  if (size == 0)
  cout << "Null Array!" << endl;
  else
  {
    cout << "{ ";
    for (int i = 0; i < size; ++i)
    cout << *(arr + i) << " ";

    cout << "}" << endl;
  }
}

int* ResizeArray(int *arr, int oldSize, int newSize)
{
  /*
  Resize Array function
  */

  int* newArray = new int[newSize];

  if (newSize >= oldSize)
  {
    for (int i = 0; i < oldSize; ++i)
    newArray[i] = arr[i];
  }
  else
  {
    for (int i = 0; i < newSize; ++i)
    newArray[i] = arr[i];
  }

  delete[] arr;
  return newArray;
}
