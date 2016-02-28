#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string s = "";
  string t = "";

  cout << "Input a string with atleast two words: ";
  getline(cin, s);

  vector<string> words;

  int pos = 0;
  int n = 0;
  int len = 0;

  for (int n = 0; n < s.length(); ++n)
  {
    if (s.at(n) == ' ' || n == s.length() - 1 )
    {
      len = n - pos + 1;
      words.push_back(s.substr(pos, len));
      pos = n+1;
    }
  }

  for (int i = 1; i < words.size(); i+=2)
  {
    t.append(words[i]);
  }

  cout << t << endl;
}
