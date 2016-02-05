#include<iostream>

using namespace std;

int main()
{
  /*
  ASCII
  */

  for (unsigned int i = 33; i <= 255; ++i)
  {
    cout << i << ": " << static_cast<unsigned char>(i) << " ";
  }
}
