#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s = "abcd";
  string t = "pqrs";

  string r = "";

  for (int i = 0 ; i < s.length(); ++i)
  {
    r.push_back(s.at(i));
    r.push_back(t.at(i));
  }

  cout << "s: " << s << endl;
  cout << "t: " << t << endl;
  cout << "r: " << r << endl;
}
