//Implementation code

#include <iostream>
#include <cstdlib>
#include "floatArray.h"

using namespace std;

//The constructor accepts integer argument and dynamically allocate the array

floatArray::floatArray(int size)
{
	list = new float[size];				// points to a dynamically allocated array of integers
	numElements = size;                // number of elements in the array
	for (int index = 0; index<size; index++)
		list[index] = 0;

}

floatArray::~floatArray()
{
	delete[]list;
}

//isValid member function

bool floatArray::isValid(int element)
{
	return (element >= 0 && element < numElements);
}

//setElement member function

void floatArray::setElement(int element, float value)
{
	if (isValid(element))
		list[element] = value;
	else
	{
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

//getElement member function

int floatArray::getElement(int element)
{
	if (isValid(element))
		return list[element];
	else
	{
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

//getHighest
double floatArray::getHighest() const
{
	int count;      
	double highest; 

	highest = list[0];

	// step through array size to compare
	for (count = 1; count < numElements; count++)
	{
		if (list[count] > highest)
		{
			// stores the highest number
			highest = list[count];
		}
	}
	return  highest;
}


// getLowest
double floatArray::getLowest() const
{
	int count;      
	double lowest;  

	lowest = list[0];

	// step through array size to compare
	for (count = 1; count < numElements; count++)
	{
		if (list[count] < lowest)
		{
			// stores the lowest number
			lowest = list[count];
		}
	}
	return  lowest;
}

// only return value
double floatArray::getAverage() const
{
	double total = 0.0;   
	int count;           
	double average = 0.0;        

	 // step through array size to add up numbers
	for (count = 0; count < numElements; count++)
	{
		total = +list[count];
	}
	average = (total / count);
	return average;

}
