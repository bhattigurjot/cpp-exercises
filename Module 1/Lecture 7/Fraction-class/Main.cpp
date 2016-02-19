#include<iostream>
#include"Fraction.h"

using namespace std;

int main()
{
	cout.setf(ios_base::boolalpha);

	Fraction a(1, 2);
	cout << "a :" << a;
	Fraction b;
	cin >> b;
	cout << "b :" << b;

	Fraction c;
	c = a + b;
	cout << "a + b :" << c;

	c = a - b;
	cout << "a - b :" << c;

	c = a * b;
	cout << "a * b :" << c;

	c = a / b;
	cout << "a + b :" << c;

	bool d;
	d = a == b;
	cout << "a == b :" << d << endl;

	d = a != b;
	cout << "a != b :" << d << endl;

	d = a > b;
	cout << "a > b :" << d << endl;

	d = a >= b;
	cout << "a >= b :" << d << endl;

	d = a < b;
	cout << "a < b :" << d << endl;

	d = a <= b;
	cout << "a <= b :" << d << endl;
}
