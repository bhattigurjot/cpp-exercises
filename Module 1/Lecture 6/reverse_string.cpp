#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s = "";
  cout << "Enter a string: ";

  getline(cin, s);

  reverse(s.begin(), s.end());

  cout << "Reversed string: " << s << endl;
}
