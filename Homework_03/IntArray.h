// Specification file for the IntArray class
#ifndef INTARRAY_H
#define INTARRAY_H
#include<iostream>
#include<cstdlib>
using namespace std;


class IntArray

{
	//friend ostream & operator<<(ostream &, const Array &);
	//friend istream & operator>>(istream &, Array &);

	private:
		int *aptr;                     // Pointer to the array
		int arraySize;                 // Holds the array size
		void subscriptError();         // Handles invalid subscripts
	public:
		IntArray(int);                 // Constructor
		IntArray(const IntArray &);    // Copy constructor
		~IntArray();                   // Destructor


		int getSize(int);

		

		int &operator[](const int &);  // Overloaded [] operator
	};
#endif