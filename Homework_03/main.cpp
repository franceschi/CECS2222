#include <iostream>
#include <iomanip>
#include "floatArray.h"        

using namespace std;

int main()
{
	const int SIZE = 10;
	

	floatArray list(SIZE);
	
	list.storeNumber(6,4);
	list.storeNumber(9,8);
	list.storeNumber(3,1);

	cout << "Highest : " << list.getHighest() << endl;
	cout << "Lowest: " << list.getLowest() << endl;
	cout << "Average: " << list.getAverage() << endl;
	cout << endl;

}


