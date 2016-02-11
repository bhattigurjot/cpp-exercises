#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void Dice(int& die1, int& die2);
void Dice(int* die1, int* die2);

int main()
{
	srand(time(0));

	int one = 0;
	int two = 0;

	cout << "Rolls Dice first time.." << endl;

	Dice(one, two);

	cout << "Die1 = " << one << endl;
	cout << "Die2 = " << two << endl;

	cout << "Rolls Dice second time.." << endl;

	Dice(&one, &two);

	cout << "Die1 = " << one << endl;
	cout << "Die2 = " << two << endl;

}

void Dice(int& die1, int& die2)
{
	/*
  Dice Random Roll function with reference
  */

	die1 = 1 + rand() % (7 - 1);
	die2 = 1 + rand() % (7 - 1);
}

void Dice(int* die1, int* die2)
{
	/*
  Dice Random Roll function with pointers
  */

	*die1 = 1 + rand() % (7 - 1);
	*die2 = 1 + rand() % (7 - 1);
}
