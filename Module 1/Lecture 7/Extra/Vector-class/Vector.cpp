#include"Vector.h"

Vector3::Vector3()
{
	mX = 0.0f;
	mY = 0.0f;
	mZ = 0.0f;
}

Vector3::Vector3(float coords[3])
{
	mX = coords[0];
	mY = coords[1];
	mZ = coords[2];
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

bool Vector3::operator==(const Vector3& rhs)
{
	//bool equals(const Vector3& rhs);
	return
	mX == rhs.mX &&
	mY == rhs.mY &&
	mZ == rhs.mZ;
}

bool Vector3::operator!=(const Vector3& rhs)
{
	//bool notEquals(const Vector3& rhs);
	return
	mX != rhs.mX ||
	mY != rhs.mY ||
	mZ != rhs.mZ;
}

Vector3 Vector3::operator+(const Vector3& rhs)
{
	//Vector3 add(const Vector3& rhs);
	Vector3 sum;
	sum.mX = mX + rhs.mX;
	sum.mY = mY + rhs.mY;
	sum.mZ = mZ + rhs.mZ;
	return sum;
}

Vector3 Vector3::operator-(const Vector3& rhs)
{
	//Vector3 sub(const Vector3& rhs);
	Vector3 diff;
	diff.mX = mX - rhs.mX;
	diff.mY = mY - rhs.mY;
	diff.mZ = mZ - rhs.mZ;
	return diff;
}

Vector3 Vector3::operator*(float scaler)
{
	//Vector3 mul(float scaler);
	Vector3 p;
	p.mX = mX * scaler;
	p.mY = mY * scaler;
	p.mZ = mZ * scaler;
	return p;
}

float Vector3::length()
{
	return sqrtf(mX*mX + mY*mY + mZ*mZ);
}

void Vector3::normalize()
{
	float len = length();
	mX /= len;
	mY /= len;
	mZ /= len;
}

float Vector3::operator*(const Vector3& rhs)
{
	//float dot(const Vector3& rhs);
	float dotP = mX*rhs.mX + mY*rhs.mY + mZ*rhs.mZ;
	return dotP;
}

Vector3::operator float*()
{
	//float* toFloatArray();
	return &mX;
}

std::ostream& operator<<(std::ostream& os, const Vector3& v)
{
	//void print();
	std::cout << "<" << v.mX << ", " << v.mY << ", " << v.mZ << ">" << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Vector3& v)
{
	//void input();
	std::cout << "Enter x: ";
	std::cin >> v.mX;
	std::cout << "Enter y: ";
	std::cin >> v.mY;
	std::cout << "Enter z: ";
	std::cin >> v.mZ;
	return is;
}
