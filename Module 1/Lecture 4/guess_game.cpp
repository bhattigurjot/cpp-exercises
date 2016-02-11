#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void Dice(int& die1, int& die2);
void Result(int g, int r, int* m, int* b);

int main()
{
	srand(time(0));

	int money = 100;
	int bet = 0;
	int option = 0;
	int one = 0;
	int two = 0;
	int guess = 0;
	int res = 0;

	bool exit = false;

	while (!exit)
	{
		cout << "Your money: " << money << endl;

		if (money <= 0)
		{
			cout << "You do not have sufficient funds.. Play Again Later." << endl;
			exit = true;
			break;
		}

		cout <<
		"1) Place Bet "
		"2) Exit " << endl << "Select Option: ";
		cin >> option;

		switch (option)
		{
			case 1:
			cout << "Place your bet: ";
			cin >> bet;

			if (bet <= 0 || bet > money)
			{
				cout << "Please place a valid bet." << endl;
			}
			else
			{
				cout << "Guess Sum: ";
				cin >> guess;
				cout << "Rolling Dice.." << endl;
				Dice(one, two);
				cout << "Die one = " << one << endl;
				cout << "Die two = " << two << endl;
				res = one + two;
				Result(guess, res, &money, &bet);
			}
			break;
			default:
			cout << "Exiting..." << endl;
			exit = true;
			break;
		}
		cout << endl;
	}
}

void Dice(int& die1, int& die2)
{
	/*
  Dice Random Roll function with reference
  */

	die1 = 1 + rand() % (7 - 1);
	die2 = 1 + rand() % (7 - 1);
}

void Result(int g, int r, int* m, int* b)
{
	/*
  Result function with pointers
  */

	if (g == r)
	{
		*m += *b * 10;
		cout << "Awesome!" << endl;
	}
	else if (g == (r - 1) || g == (r + 1))
	{
		*m += *b * 2;
		cout << "Good!" << endl;
	}
	else if (g == (r - 2) || g == (r + 2))
	{
		*m += *b * 1;
		cout << "Nice!" << endl;
	}
	else
	{
		*m -= *b;
		cout << "Oops!" << endl;
	}
}
