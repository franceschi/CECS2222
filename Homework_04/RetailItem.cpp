#include "RetailItem.h"
using namespace std;

RetailItem::RetailItem(string dsc, int units, double prc)
{
	this->description = dsc;
	this->unitsOnHand = units;
	this->price = prc;
}

RetailItem::RetailItem(const RetailItem & tempRetailItem)
{
}

RetailItem::RetailItem()
{
}

RetailItem::~RetailItem()
{
}

string RetailItem::getDescription()
{
	return description;
}

void RetailItem::setDescription(string dsc)
{
	this->description = dsc;
}

int RetailItem::getUnitsOnHand()
{
	return unitsOnHand;
}

void RetailItem::setUnitsOnHand(int units)
{
	this->unitsOnHand = units;
}

double RetailItem::getPrice()
{
	return price;
}

void RetailItem::setPrice(double prc)
{
	this->price = prc;
}
