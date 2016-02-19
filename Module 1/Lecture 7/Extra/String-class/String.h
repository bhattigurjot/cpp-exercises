//#pragma once
#ifndef STRING_H
#define STRING_H

#include<iostream>
#include<cstring>

class String
{
public:
	String();
	String(const char* rhs);
	String(const String& rhs);
	~String();

	String& operator=(const String& rhs);
	String& operator[](int i);

private:
	char* mData;
};

#endif // STRING_H
