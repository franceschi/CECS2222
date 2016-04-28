#include <iostream>
#include <iomanip>
#include "floatArray.h"        

using namespace std;

int main()
{
	//const int SIZE = 3;
	//floatArray numbers(SIZE);
	int val, x;
	float *s;

	floatArray numbers();
	
	cout << "Enter the number for the array: ";
	cin>> val;

	s = new float[x];

	for (x = 0; x<val; x++)
	{
		//Store Number
		cout << "Enter a number"; 
		cin >> *(s + x);
		numbers.setElement(x);
		cout << " " << numbers.getElement(x) << endl;

	}
	cout << endl;
	cout << "Highest : " << numbers.getHighest() << endl;
	cout << "Lowest: " << numbers.getLowest() << endl;
	cout << "Average: " << numbers.getAverage() << endl;
	cout << endl;
	cin.get();
}


