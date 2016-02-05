#include<iostream>

using namespace std;

int main()
{
  /*
  Navigator
  */

  char input = 'a';
  bool quit = false;
  int x,y;
  x = y = 0;

  while (!quit)
  {
    cout << "Current Position = (" << x << ", " << y << ")" << endl;
    cout << "Move (N)orth, (E)ast, (S)outh, (W)est (Q)uit? ";
    cin >> input;

    switch(input)
    {
      case 'Q':
      case 'q':
      cout <<"Exiting..." << endl;
      quit = true;
      break;
      case 'N':
      case 'n':
      y += 1;
      break;
      case 'E':
      case 'e':
      x += 1;
      break;
      case 'S':
      case 's':
      y -= 1;
      break;
      case 'W':
      case 'w':
      x -= 1;
      break;
      default:
      cout << "Invalid command, Try again!" << endl;
      break;
    }
  }
}
