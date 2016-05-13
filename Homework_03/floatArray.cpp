//Implementation code

#include <iostream>
#include <cstdlib>
#include "floatArray.h"

using namespace std;

//The constructor accepts integer argument and dynamically allocate the array

floatArray::floatArray(int size)
{
	arraySize = size;
	aptr = new float[size];				
	for (int index = 0; index < arraySize; index++)
		*(aptr + index) = 0;
}


floatArray::~floatArray()
{
	if(arraySize>0)
	delete[]aptr;
}


void floatArray::storeNumber(float num, int ele)
{
	if (ele < arraySize)
		*(aptr + ele) = num;
}

float floatArray:: getNumber(int ele)
{
	return *(aptr+ele);
}


float floatArray::getHighest() const
{
	float high = *(aptr + 0);
	
	for (int i = 1; i < arraySize; i++)
	{
		if (high<*(aptr+i))
		{
			high = *(aptr + i);
		}
	}
	return  high;
}


float floatArray::getLowest() const
{
	float low = *(aptr + 0);

	for (int i = 1; i < arraySize; i++)
	{
		if (low>*(aptr + i))
		{
			low = *(aptr + i);
		}
	}
	return  low;
}


float floatArray::getAverage() const
{
	float average = 0;

	for (int i = 0; i < arraySize; i++)
	{
		average += *(aptr + i);
		average = (average / arraySize);
	}
	return average;

}
