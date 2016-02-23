#include <iostream>

using namespace std;

int main()
{
  float pi = 3.14f;
  float res = 1.0f;

  for (int i = 1; i <= 47; ++i)
  {
    res *= pi;
  }

  cout << " pi ^ 47 = " << res << endl;
}
