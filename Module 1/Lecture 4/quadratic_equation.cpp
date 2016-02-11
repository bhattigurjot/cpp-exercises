#include<iostream>
#include<cmath>

using namespace std;

void call(float a, float b, float c);
bool QuadraticFormula(float a, float b, float c, float& r1, float& i1, float& r2, float& i2);

int main()
{
	call(1, 2, 5);
	call(1, -2, 1);
	call(1, -1, -6);
}

void call(float a, float b, float c)
{
	/*
	Call function
	*/

	float r1 = 0.0f;
	float i1 = 0.0f;
	float r2 = 0.0f;
	float i2 = 0.0f;

	bool img = false;
	img = QuadraticFormula(a, b, c, r1, i1, r2, i2);

	if (i1 < 0 && i2 >= 0)
	{
		cout <<
		"S1 = " << r1 << " - " << -i1 << "i , and "
		"S2 = " << r2 << " + " << i2 << "i" << endl;
	}
	else if (i1 >= 0 && i2 < 0)
	{
		cout <<
		"S1 = " << r1 << " + " << i1 << "i , and "
		"S2 = " << r2 << " - " << -i2 << "i" << endl;
	}
	else
	{
		cout <<
		"S1 = " << r1 << " + " << i1 << "i , and "
		"S2 = " << r2 << " + " << i2 << "i" << endl;
	}
}

bool QuadraticFormula(float a, float b, float c,float& r1, float& i1, float& r2, float& i2)
{
	/*
	Quadratic Equation function
	*/

	float under = 0.0f;
	float det = 0.0f;
	bool isIt = false;

	under = powf(b, 2) - (4 * a*c);

	if (under < 0)
	{
		under = -(under);
		isIt = true;

		det = sqrtf(under);

		r1 = r2 = -b / (2 * a);
		i1 = det / (2 * a);
		i2 = -det / (2 * a);
	}

	else
	{
		det = sqrtf(under);

		r1 = (-b + det) / (2 * a);
		r2 = (-b - det) / (2 * a);
		i1 = i2 = 0.0f;
	}

	cout << "Coefficients a = " << a << ", b = " << b << ", c = " << c << " yield \n";

	if (isIt)
	return false;
	else
	return true;
}
