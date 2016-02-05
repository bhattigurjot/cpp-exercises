#include<iostream>

using namespace std;

int main()
{
  /*
  Selection Sort
  */

  int arr[10] = {0,0,0,0,0,0,0,0,0,0};
  int pos = 0;
  cout << "Enter ten unsorted integers..." << endl;

  for (int i = 0; i < 10; ++i)
  {
    cout << "[" << i << "] = ";
    cin >> arr[i];
  }

  int length = (sizeof(arr)/sizeof(*arr));

  cout << "Unsorted List = ";
  for (int i = 0; i < length; ++i)
  {
    if (arr[i] != arr[length-1])
    cout << arr[i] << ", ";
    else
    cout << arr[i] << endl;
  }

  cout << "Sorting..." << endl;

  for (int i = 0; i < length-1; i++)
  {
    pos = i;

    for (int j = i+1; j < length; j++)
    {
      if (arr[j] < arr[pos])
      {
        pos = j;
      }
    }

    if (pos != i)
    {
      int temp = 0;
      temp = arr[i];
      arr[i] = arr[pos];
      arr[pos] = temp;
    }
  }

  cout << "Sorted List = ";
  for (int i = 0; i < length; ++i)
  {
    if (arr[i] != arr[length-1])
    cout << arr[i] << ", ";
    else
    cout << arr[i] << endl;
  }
}
