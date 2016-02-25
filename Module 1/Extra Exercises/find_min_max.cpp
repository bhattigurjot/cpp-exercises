#include <iostream>

using namespace std;

float FindMax(float arrayIn[], int len)
{
  float max = arrayIn[0];

  for (int i = 0; i < len; ++i)
  {
    if (arrayIn[i] > max)
    max = arrayIn[i];
  }

  return max;
}

float FindMin(float arrayIn[], int len)
{
  float min = arrayIn[0];

  for (int i = 0; i < len; ++i)
  {
    if (arrayIn[i] < min)
    min = arrayIn[i];
  }

  return min;
}

int main()
{
  float arrayIn[] = { 1, 5.32, 0.25, 11.33, -4, 13, 21, -3, 0.1, 9 };
  int len = sizeof(arrayIn) / sizeof(*arrayIn);

  cout << "data = ";

  for (int i = 0; i < len; ++i)
  {
    cout << arrayIn[i] << ", ";
  }

  cout << endl;

  cout << "Max: " << FindMax(arrayIn, len) << endl;
  cout << "Min: " << FindMin(arrayIn, len) << endl;
}
