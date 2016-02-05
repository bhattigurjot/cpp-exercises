#include<iostream>
#include<cmath>

using namespace std;

void print(float ux, float uy, float uz, float vx, float vy, float vz);

float dist3(float ux, float uy, float uz, float vx, float vy, float vz);

int main()
{
  print(1,2,3,0,0,0);
  print(1,2,3,1,2,3);
  print(1,2,3,7,-4,5);
}

float dist3(float ux, float uy, float uz, float vx, float vy, float vz)
{
  /*
  3D Distance Calculation Function
  */

  float dist = 0.0f;

  float res = pow(vx-ux, 2) + pow(vy-uy, 2) + pow(vz-uz, 2);
  dist = sqrt(res);

  return dist;
}

void print(float ux, float uy, float uz, float vx, float vy, float vz)
{
  /*
  Print Function
  */

  cout << "Distance between (" << ux << "," << uy << "," << uz << ") and (" <<
  vx << "," << vy << "," << vz << ") = " << dist3(ux,uy,uz,vx,vy,vz) << endl;
}
