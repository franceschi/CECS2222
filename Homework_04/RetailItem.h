//Retail Item header file

#pragma once
#include <iostream>
#include <string>
using namespace std;


class RetailItem

{
private:
	string description;
	int unitsOnHand;
	double price;

public:
	RetailItem(string dsc, int units, double prc);
	RetailItem(const RetailItem & tempRetailItem);
	RetailItem();
	~RetailItem();

	//Setter & Getters

	void setDescription(string dsc);
	void setUnitsOnHand(int units);
	void setPrice(double prc);

	string getDescription();
	int getUnitsOnHand();
	double getPrice();

};

