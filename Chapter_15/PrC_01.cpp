
#include <iostream>

using namespace std;
#include "Employee.h"
#include "ProductionWorker.h"


int main()
{
	// Define a ProductionWorker object and use the values entered by the user.
	
	string name;   // To hold the worker's name
	int number;  // To hold the worker's employee number
	string date;  // To hold the worker's hire date
	int shift;
	double pay;

	cout << "Enter the Production Worker information:\n";
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your employee number: ";
	cin >> number;
	cout << "Enter your hire date: ";
	cin >> date;
	cout << "Enter your shift number (1 or 2): ";
	cin >> shift;
	cout << "Enter your hourly pay rate: ";
	cin >> pay;

	ProductionWorker myEmployee(name, number, date, shift, pay);

	// Display the ProductionWorker object's properties.
	cout << "Here is the Employee's data:\n";
	cout << "Name: " << myEmployee.getName() << endl;
	cout << "Employee Number: " << myEmployee.getNumber() << endl;
	cout << "Hiring Date: " << myEmployee.getDate() << endl;
	cout << "Shift: " << myEmployee.getShift() << endl;
	cout << "Pay Rate: " << myEmployee.getPay() << endl;

	return 0;
}