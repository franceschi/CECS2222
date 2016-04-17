// This program demonstrates an overloaded [] operator.
#include <iostream>
#include "IntArray.h"
using namespace std;

int main()
{

		const int SIZE = 20;  // Array size

		IntArray table(SIZE);

		// Store values in the array.

		
		for (int x = 0; x < SIZE; x++)
			table[x] = x;


		// Display the values in the array.
		for (int x = 0; x < SIZE; x++)
			cout << table[x] << " ";
		cout << endl;

		
		return 0;
	
}