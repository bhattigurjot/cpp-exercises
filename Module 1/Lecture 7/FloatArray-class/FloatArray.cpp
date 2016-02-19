#include"FloatArray.h"

FloatArray::FloatArray()
{
	mSize = 0;
	mData = new float[mSize];
}

FloatArray::FloatArray(int size)
{
	mSize = size;
	mData = new float[mSize];
}

FloatArray::FloatArray(const FloatArray& rhs)
{
	mSize = rhs.mSize;
	mData = new float[mSize];

	for (int i = 0; i < mSize; ++i)
	mData[i] = rhs.mData[i];

}

FloatArray::~FloatArray()
{
	delete[] mData;
	mData = 0;
}

FloatArray& FloatArray::operator=(const FloatArray& rhs)
{
	if (this == &rhs)
	return *this;

	mSize = rhs.mSize;

	delete[] mData;

	mData = new float[mSize];

	for (int i = 0; i < mSize; ++i)
	mData[i] = rhs.mData[i];

	return *this;
}

void FloatArray::resize(int newSize)
{
	FloatArray newFA(newSize);

	if (newSize >= mSize)
	{
		for (int i = 0; i < mSize; ++i)
		newFA.mData[i] = mData[i];
	}
	else
	{
		for (int i = 0; i < newSize; ++i)
		newFA.mData[i] = mData[i];
	}

	delete[] mData;
	mData = 0;

	*this = newFA;

	//delete[] newFA.mData;
	//newFA.mData = 0;
}

int FloatArray::size()
{
	return mSize;
}

float& FloatArray::operator[](int i)
{
	return mData[i];
}
