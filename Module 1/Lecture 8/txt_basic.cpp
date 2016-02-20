#include <iostream>
#include <fstream>

using namespace std;

struct Point
{
  int x;
  int y;
};

int main ()
{
  float fArray[4] = { 1, 2, 3, 4 };
  Point p = { 0, 0 };
  int x = 10;

  ofstream outFile("abc.txt");

  if (outFile)
  {
    for (int i = 0; i < 4; ++i)
    outFile << fArray[i] << " ";

    outFile << endl;

    outFile << p.x << " " << p.y << endl;

    outFile << x << endl;

    cout << "Writing Process finished!" << endl;
  }

  outFile.close();

  ifstream inFile("abc.txt");

  if (inFile)
  {
    for (int i = 0; i < 4; ++i)
    inFile >> fArray[i];

    inFile >> p.x >> p.y;

    inFile >> x;

    cout << "Reading Process finished!" << endl;

    for (int i = 0; i < 4; ++i)
    cout << fArray[i] << " ";

    cout << endl;

    cout << p.x << " " << p.y << endl;

    cout << x << endl;

  }

  inFile.close();
}
