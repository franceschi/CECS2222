#include <iostream>
#include <iomanip>
#include "floatArray.h"        

using namespace std;

int main()
{
	const int SIZE = 10;
	

	floatArray list(SIZE);
	
	list.storeNumber(6, 9);
	list.storeNumber(3, 9);
	list.storeNumber(2, 9);

	cout << "Highest : " << list.getHighest() << endl;
	cout << "Lowest: " << list.getLowest() << endl;
	cout << "Average: " << list.getAverage() << endl;
	cout << endl;

}


