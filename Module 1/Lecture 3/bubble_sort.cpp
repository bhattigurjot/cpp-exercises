#include<iostream>

using namespace std;

void BubbleSort(int data[], int n);

int main()
{
  int arr[] = {0,0,0,0,0,0,0,0,0,0};
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
  BubbleSort(arr, length);

}

void BubbleSort(int data[], int n)
{
  /*
  Bubble Sort Function
  */
  int subArrayEnd = n-1;
  int nextEnd = 0;

  while (subArrayEnd > 0)
  {
    for (int i = 0; i <= subArrayEnd-1; ++i)
    {
      if (data[i] > data[i+1])
      {
        int temp = 0;
        temp = data[i];
        data[i] = data[i+1];
        data[i+1] = temp;
      }
      nextEnd = i;
    }
    subArrayEnd = nextEnd;
  }

  cout << "Sorted List = ";
  for (int i = 0; i < n; ++i)
  {
    if (data[i] != data[n-1])
    cout << data[i] << ", ";
    else
    cout << data[i] << endl;
  }
}
