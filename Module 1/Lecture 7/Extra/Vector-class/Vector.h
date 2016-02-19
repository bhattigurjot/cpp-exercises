//#pragma once
#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector3
{
public:
	friend std::istream& operator>>(std::istream& is, Vector3& v);
	friend std::ostream& operator<<(std::ostream& os, const Vector3& v);

	Vector3();
	Vector3(float coords[3]);
	Vector3(float x, float y, float z);

	bool operator==(const Vector3& rhs);
	bool operator!=(const Vector3& rhs);
	Vector3 operator+(const Vector3& rhs);
	Vector3 operator-(const Vector3& rhs);
	Vector3 operator*(float scaler);
	float length();
	void normalize();
	float operator*(const Vector3& rhs);

	operator float*();

	float mX;
	float mY;
	float mZ;
};

#endif // VECTOR_H
