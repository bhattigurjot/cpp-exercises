//#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include<iostream>

class Fraction
{
public:
	Fraction();
	Fraction(float num, float den);

	Fraction operator+(const Fraction& rhs);
	Fraction operator-(const Fraction& rhs);
	Fraction operator*(const Fraction& rhs);
	Fraction operator/(const Fraction& rhs);
	bool operator==(const Fraction& rhs);
	bool operator!=(const Fraction& rhs);
	bool operator<(const Fraction& rhs);
	bool operator<=(const Fraction& rhs);
	bool operator>(const Fraction& rhs);
	bool operator>=(const Fraction& rhs);
	operator float();
	operator double();

	friend std::istream& operator>>(std::istream& is, Fraction& rhs);
	friend std::ostream& operator<<(std::ostream& os, const Fraction& rhs);

private:
	float mNumerator;
	float mDenominator;
};

#endif // FRACTION_H
