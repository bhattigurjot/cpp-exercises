#include"Fraction.h"

Fraction::Fraction()
{
	mNumerator = 0.0f;
	mDenominator = 1.0f;
}

Fraction::Fraction(float num, float den)
{
	mNumerator = num;
	mDenominator = den;
}

Fraction Fraction::operator+(const Fraction& rhs)
{
	Fraction sum;
	sum.mNumerator = (mNumerator * rhs.mDenominator) + (mDenominator * rhs.mNumerator);
	sum.mDenominator = mDenominator * rhs.mDenominator;
	return sum;
}

Fraction Fraction::operator-(const Fraction& rhs)
{
	Fraction diff;
	diff.mNumerator = (mNumerator * rhs.mDenominator) - (mDenominator * rhs.mNumerator);
	diff.mDenominator = mDenominator * rhs.mDenominator;
	return diff;
}

Fraction Fraction::operator*(const Fraction& rhs)
{
	Fraction p;
	p.mNumerator = mNumerator * rhs.mNumerator;
	p.mDenominator = mDenominator * rhs.mDenominator;
	return p;
}

Fraction Fraction::operator/(const Fraction& rhs)
{
	Fraction d;
	d.mNumerator = mNumerator * rhs.mDenominator;
	d.mDenominator = mDenominator * rhs.mNumerator;
	return d;
}

bool Fraction::operator==(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a == b)
	return true;
	else
	return false;
}

bool Fraction::operator!=(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a != b)
	return true;
	else
	return false;
}

bool Fraction::operator<(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a < b)
	return true;
	else
	return false;
}

bool Fraction::operator<=(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a <= b)
	return true;
	else
	return false;
}

bool Fraction::operator>(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a > b)
	return true;
	else
	return false;
}

bool Fraction::operator>=(const Fraction& rhs)
{
	float a = 0.0f;
	float b = 0.0f;

	a = mNumerator / mDenominator;
	b = rhs.mNumerator / rhs.mDenominator;

	if (a >= b)
	return true;
	else
	return false;
}

Fraction::operator float()
{
	return mNumerator/mDenominator;
}

Fraction::operator double()
{
	return (double)mNumerator / (double)mDenominator;
}

std::istream& operator>>(std::istream& is, Fraction& rhs)
{
	std::cout << "Enter numerator: ";
	std::cin >> rhs.mNumerator;
	std::cout << "Enter denominator: ";
	std::cin >> rhs.mDenominator;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Fraction& rhs)
{
	std::cout << rhs.mNumerator << "/" << rhs.mDenominator << std::endl;
	return os;
}
