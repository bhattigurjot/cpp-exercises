#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
  srand(time(0));

  int r = 0;
  string n = "";
  int x = 0;
  int low = 0;
  int high = 99;
  r = low + rand() % ((high + 1) - low);

  bool quit = false;

  while (!quit)
  {
    cout << "Guess the number between 0 and 99 or enter x to quit: ";
    cin >> n;

    if (n == "x")
    {
      cout << "Exiting..." << endl;
      quit = true;
    }
    else
    {
      x = atoi(n.c_str());
      if (x == r)
      {
        cout << "Congratulations you guessed it right!" << endl;
        quit = true;
      }
      else if (x > r)
      {
        cout << "Your guess is too high!" << endl;
      }
      else
      {
        cout << "Your guess is too low!" << endl;
      }
    }
  }
}
