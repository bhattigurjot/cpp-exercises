//#pragma once
#ifndef FLOAT_ARRAY_H
#define FLOAT_ARRAY_H

#include<iostream>

class FloatArray
{
public:
	// Create a FloatArray with zero elements.
	FloatArray();
	// Create a FloatArray with 'size' elements.
	FloatArray(int size);
	// Create a FloatArray from another FloatArray--
	// be sure to prevent memory leaks!
	FloatArray(const FloatArray& rhs);
	// Free dynamic memory.
	~FloatArray();
	// Define how a FloatArray shall be assigned to
	// another FloatArray--be sure to prevent memory
	// leaks!
	FloatArray& operator=(const FloatArray& rhs);
	// Resize the FloatArray to a new size.
	void resize(int newSize);
	// Return the number of elements in the array.
	int size();
	// Overload bracket operator so client can index
	// into FloatArray objects and access the elements.
	float& operator[](int i);

private:
	float* mData; // Pointer to array of floats (dynamic memory).
	int mSize; // The number of elements in the array.
};
#endif // FLOAT_ARRAY_H
