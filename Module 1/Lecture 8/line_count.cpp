#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string path;
  cout << "Enter a text file:";
  cin >> path;

  int count = 0;
  string line;

  ifstream inFile(path);

  if (inFile)
  {
    while (!inFile.eof())
    {
      getline(inFile, line);
      ++count;
    }
  }

  inFile.close();

  cout << path << " contained " << count << " lines." << endl;
}
