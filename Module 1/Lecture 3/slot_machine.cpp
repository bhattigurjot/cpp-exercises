#include<iostream>
#include<cstdlib>

using namespace std;

int Random(int low, int high);

int main()
{
  float money = 1000.0f;
  float bet = 0.0f;
  int option = 0;
  int rand1, rand2, rand3;
  rand1 = rand2 = rand3 = 0;
  bool exit = false;

  while (!exit)
  {
    if (money == 0.0)
    {
      cout << "You do not have any funds. Exiting...";
      exit = true;
      break;
    }
    cout << "Player's chips: $" << money << endl;
    cout << "1) Play slot. 2) Exit. ";
    cin >> option;
    switch(option)
    {
      case 1:
      cout << "Place your bet: ";
      cin >> bet;
      if (bet > 0 && bet <= money)
      {
        if (rand1 == 7 && rand2 == 7 && rand3 == 7)
        {
          money += bet*10;
          cout << rand1 << " " << rand2 << " " << rand3 << endl;
          cout << "Awesome! You win" << endl;
        }
        else if (rand1 != 7 && rand1 == rand2 && rand2 == rand3)
        {
          money += bet*5;
          cout << rand1 << " " << rand2 << " " << rand3 << endl;
          cout <<"Sweet! You win" << endl;
        }
        else if (rand1 == rand2 || rand2 == rand3 || rand1 == rand3)
        {
          money += bet*3;
          cout << rand1 << " " << rand2 << " " << rand3 << endl;
          cout <<"Good! You win" << endl;
        }
        else
        {
          money -= bet;
          cout <<"Oh! Better luck next time!" << endl;
        }
      }
      else
      {
        cout <<"You did not enter a valid bet." << endl;
      }
      break;
      case 2:
      cout << "Exiting..." << endl;
      exit = true;
      break;
    }
  }
}

int Random(int low, int high)
{
  return low + rand() % ((high+1) - low);
}
