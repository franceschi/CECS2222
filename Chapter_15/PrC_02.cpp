
#include <iostream>

using namespace std;
#include "Employee.h"
#include "ShiftSupervisor.h"



int main()
{
	// Define a ShiftSupervisor object and use the values entered by the user.

	string name, date;   // To hold the worker's name and the worker's hire date.
	int number, shift;  // To hold the worker's employee number.
	double pay, salary, bonus;

	cout << "Enter the Production Worker information:\n";
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your employee number: ";
	cin >> number;
	cout << "Enter your hire date: ";
	cin >> date;
	cout << "Enter your annual salary: ";
	cin >> salary;
	cout << "Enter your production bonus: ";
	cin >> bonus;

	ShiftSupervisor mySupervisor(name, number, date, salary, bonus);

	// Display the ProductionWorker object's properties.
	cout << "Here is the Employee's data:\n";
	cout << "Name: " << mySupervisor.getName() << endl;
	cout << "Employee Number: " << mySupervisor.getNumber() << endl;
	cout << "Hiring Date: " << mySupervisor.getDate() << endl;
	cout << "Shift: " << mySupervisor.getSalary() << endl;
	cout << "Pay Rate: " << mySupervisor.getBonus() << endl;

	return 0;
}