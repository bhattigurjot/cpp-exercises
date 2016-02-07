#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

int BinSearch(int data[], int numElements, int searchkey);

int main()
{
  bool exit = false;
  string input = "";
  int res = -1;
  int arr[] = {1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95};
  int length = sizeof(arr)/sizeof(*arr);

  for (int n = 0; n < length; ++n)
  cout << arr[n] << ", ";
  cout << "\n";

  while (!exit)
  {
    cout << "Enter search key (or 'x' to exit): ";
    cin >> input;

    if (input == "x" || input == "X")
    {
      cout << "Exiting..." << endl;
      exit = true;
    }

    else
    {
      res = BinSearch(arr, length, atoi( input.c_str() ));

      if (res == -1)
      cout << input << " not found" << endl;
      else
      cout << input << " is in position " << res << endl;
    }
  }
}

int BinSearch(int data[], int numElements, int searchkey)
{
  int middle = 0;
  int pos = -1;
  int lowerV = 0;
  int upperV = numElements-1;

  while (data[pos] != searchkey && (lowerV <= upperV))
  {
    middle = (lowerV + upperV)/2;

    if (searchkey > data[middle])
    lowerV = middle+1;
    else if (searchkey < data[middle])
    upperV = middle-1;
    else
    pos = middle;
  }

  return pos;
}
