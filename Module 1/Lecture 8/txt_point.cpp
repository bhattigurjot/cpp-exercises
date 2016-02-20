#include <iostream>
#include <fstream>

using namespace std;

struct Point3
{
  Point3();
  Point3(float x, float y, float z);
  float mX;
  float mY;
  float mZ;
};

Point3::Point3()
{
  mX = mY = mZ = 0;
}

Point3::Point3(float x, float y, float z)
{
  mX = x;
  mY = y;
  mZ = z;
}

int main()
{
  Point3 cube[8];
  cube[0] = Point3(-1.0f, -1.0f, -1.0f);
  cube[1] = Point3(-1.0f, 1.0f, -1.0f);
  cube[2] = Point3(1.0f, 1.0f, -1.0f);
  cube[3] = Point3(1.0f, -1.0f, -1.0f);
  cube[4] = Point3(-1.0f, -1.0f, 1.0f);
  cube[5] = Point3(-1.0f, 1.0f, 1.0f);
  cube[6] = Point3(1.0f, 1.0f, 1.0f);
  cube[7] = Point3(1.0f, -1.0f, 1.0f);

  ofstream outFile;
  outFile.open("abc.txt");

  if (outFile)
  {
    for (int i = 0; i < 8; ++i)
    {
      outFile <<
      cube[i].mX << " " <<
      cube[i].mY << " " <<
      cube[i].mZ << " ";
    }

    cout << "Writing Process finished!" << endl;
  }
  else
  {
    cout << "Cannot Write to file!" << endl;
  }

  outFile.close();

  for (int i = 0; i < 8; ++i)
  {
    cube[i] = {0,0,0};
  }

  cout << "BEFORE LOADING..." << endl;
  for (int i = 0; i < 8; ++i)
  {
    cout << "cube[" << i << "] = ";
    cout << "(";
    cout << cube[i].mX << ", ";
    cout << cube[i].mY << ", ";
    cout << cube[i].mZ << ")" << endl;
  }

  cout << endl;

  ifstream inFile;
  inFile.open("abc.txt");

  if (inFile)
  {
    for (int i = 0; i < 8; ++i)
    {
      inFile >>
      cube[i].mX >>
      cube[i].mY >>
      cube[i].mZ;
    }

    cout << "Reading Process finished!" << endl;
  }
  else
  {
    cout << "Cannot Read from file!" << endl;
  }

  inFile.close();

  cout << "AFTER LOADING..." << endl;
  for (int i = 0; i < 8; ++i)
  {
    cout << "cube[" << i << "] = ";
    cout << "(";
    cout << cube[i].mX << ", ";
    cout << cube[i].mY << ", ";
    cout << cube[i].mZ << ")" << endl;
  }
}
