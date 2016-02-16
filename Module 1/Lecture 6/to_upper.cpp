#include<iostream>
#include<string>

using namespace std;

string toUpperCase(string& s)
{
  for (int i = 0; i < s.length(); ++i)
  {
    if (s[i] <= 122 && s[i] >= 97)
    s[i] -= 32;
  }

  return s;
}

int main()
{
  string str = "";
  cout << "Enter a string: ";

  getline(cin, str);

  cout << "Uppercase string: " << toUpperCase(str) << endl;
}
