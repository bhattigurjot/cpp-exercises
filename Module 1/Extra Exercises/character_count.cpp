#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "";
  char c = 'a';
  int n = 0;

  cout << "Input a string: ";
  cin >> s;

  cout << "Input a character: ";
  cin >> c;

  for (int i = 0; i < s.length(); ++i)
  {
    if (s.at(i) == c)
    ++n;
  }

  cout << "Character Count: " << n << endl;
}
