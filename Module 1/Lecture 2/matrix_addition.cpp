#include<iostream>

using namespace std;

int main()
{
  /*
  Matrix Addition
  */

  int A[2][3] =
  {
    {-5,2,8},
    {1,0,0}
  };
  int B[2][3] =
  {
    {1,0,2},
    {0,3,-6}
  };
  int C[2][3] =
  {
    {0,0,0},
    {0,0,0}
  };

  cout << "A = " << endl;
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "B = " << endl;
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      cout << B[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "A + B = " << endl;
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      C[i][j] = A[i][j] + B[i][j];
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
}
