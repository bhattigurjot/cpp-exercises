#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int>& v);

int main()
{
  vector<int> array;

  bool exit = false;
  while (!exit)
  {
    printArray(array);

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

      if (index < 0 || index >= array.size())
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
      array.resize(newSize);
      break;

      case 3:
      cout << "Exiting... " << endl;
      exit = true;
      break;
    }
  }
}

void printArray(vector<int>& v)
{
  /*
  Print Array function
  */

  if (v.size() == 0)
  cout << "Null Array!" << endl;
  else
  {
    cout << "{ ";
    for (int i = 0; i < v.size(); ++i)
    cout << v[i] << " ";

    cout << "}" << endl;
  }
}
