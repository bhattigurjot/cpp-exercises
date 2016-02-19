#include"String.h"

String::String()
{

}

String::String(const char* rhs)
{
	int len = strlen(rhs);

	mData = new char[len + 1];

	for (int i = 0; i < len; ++i)
	mData[i] = rhs[i];

	mData[len] = '\0';
}

String::String(const String& rhs)
{
	mData = 0;
	*this = rhs;
}

String::~String()
{
	delete[] mData;
	mData = 0;
}

String& String::operator=(const String& rhs)
{
	// Self-assignment prevention
	if (this == &rhs)
	return *this;

	int len = strlen(rhs.mData);

	delete[] mData;

	mData = new char[len + 1];

	for (int i = 0; i < len; ++i)
	mData[i] = rhs.mData[i];

	mData[len] = '\0';

	return *this;
}

String& String::operator[](int i)
{
	return mData[];
}
