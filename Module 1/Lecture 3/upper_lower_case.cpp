#include<iostream>

using namespace std;

char ToUpperCase(char input);
char ToLowerCase(char input);

int main()
{
  cout << "To Upper Case " << endl;

  for (int i = 97; i <= 122; ++i)
  {
    cout << (char)i << ": " << ToUpperCase((char)i) << ", ";
  }

  cout << endl;

  cout << "To Lower Case " << endl;

  for (int i = 65; i <= 90; ++i)
  {
    cout << (char)i << ": " << ToLowerCase((char)i) << ", ";
  }
}

char ToUpperCase(char input)
{
  /*
  To-Upper-Case Function
  */
  int val = (char)input;

  if (val >= 97 && val <=122)
  {
    val -= 32;
    input = (char)val;
  }
  else if (val >= 65 && val <=90)
  {
    input = (char)val;
  }
  else
  input = '/0';

  return input;
}

char ToLowerCase(char input)
{
  /*
  To-Lower-Case Function
  */
  int val = (char)input;

  if (val >= 65 && val <=90)
  {
    val += 32;
    input = (char)val;
  }
  else if (val >= 97 && val <=122)
  {
    input = (char)val;
  }
  else
  input = '/0';

  return input;
}
