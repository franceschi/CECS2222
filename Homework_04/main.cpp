#include "RetailItem.h"

using namespace std;

int main()
{
	RetailItem item_01("iPad 16GB", 9, 299.99);
	RetailItem item_02("iPad 32GB", 5, 399.99);
	RetailItem item_03("iPad 64GB", 9, 499.99);
	
	cout << item_01.getDescription() << " " <<  item_01.getUnitsOnHand() <<" "<< item_01.getPrice() << endl;
	cout << item_02.getDescription() << " " << item_02.getUnitsOnHand() << " " << item_02.getPrice() << endl;
	cout << item_03.getDescription() << " " << item_03.getUnitsOnHand() << " " << item_03.getPrice() << endl;

	return 0;

}