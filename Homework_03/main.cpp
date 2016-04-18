#include <iostream>
#include <iomanip>
#include "floatArray.h"        

using namespace std;

int main()
{
	const int SIZE = 3;
	floatArray numbers(SIZE);
	int val, x;

	numbers.setElement(2, 20);

	for (x = 0; x<SIZE; x++)
	{
		//Store Number
		numbers.setElement(0, 10);
		cout << " " << numbers.getElement(x) << endl;

	}
	cout << endl;
	cout << "Highest : " << numbers.getHighest() << endl;
	cout << "Lowest: " << numbers.getLowest() << endl;
	cout << "Average: " << numbers.getAverage() << endl;
	cout << endl;
	cin.get();
}


