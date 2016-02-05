#include<iostream>

using namespace std;

int main()
{
  /*
  Linear Search
  */

  int arr[] = {7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8};
  int length = (sizeof(arr)/sizeof(*arr));
  int val = 0;
  int index = 0;
  bool found = false;

  cout << "List = ";
  for (int i = 0; i < length; ++i)
  {
    if (arr[i] != arr[length-1])
    cout << arr[i] << ", ";
    else
    cout << arr[i] << endl;
  }
  cout << "Enter an integer in the list to search for: ";
  cin >> val;

  for (int i = 0; i < length; ++i)
  {
    if (arr[i] == val)
    {
      index = i;
      found = true;
      break;
    }
  }

  if (found)
  cout << "Item found at index [" << index << "]";
  else
  cout << "Item not found in the list";
}
