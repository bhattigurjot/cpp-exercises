#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string& s)
{
  int p = 0;
  p = s.length() / 2;

  string firstSub = "";
  string secondSub = "";

  firstSub = s.substr(0, p);

  if (s.length() % 2 == 0)
  secondSub = s.substr(p, s.length());
  else
  secondSub = s.substr(p + 1, s.length());

  reverse(secondSub.begin(), secondSub.end());

  if (firstSub == secondSub)
  return true;
  else
  return false;
}

int main()
{
  string str = "";
  cout << "Enter a string: ";

  getline(cin, str);

  if (isPalindrome(str))
  cout << str << " is a palindrome" << endl;
  else
  cout << str << " is not a palindrome" << endl;
}
