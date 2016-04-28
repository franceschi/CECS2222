//Retail Item header file

#pragma once
#include <iostream>
using namespace std;
#include <string>
#define RetailItem_H
#ifndef RetailItem_H


class RetailItem

{
private:
	string description;
	int unitsOnHand;
	double price;

public:
	RetailItem();
	RetailItem(string, int, double);
	RetailItem(const RetailItem & tempRetailItem);
	~RetailItem();

	//Setter & Getters

	string setDescription(string);
	int setUnitsOnHand(int);
	double setPrice(double);

	void getDescription() const;
	void getUnitsOnHand() const;
	void getPrice() const;

};
#endif // !RetailItem_H
