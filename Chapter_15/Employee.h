#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{

private:
	string name;
	int number;
	string date;

public:

	//Default Constructor
	Employee()
	{
		cout << "Employee Program" << endl;
		name = "Miguel Franceschi";
		number = 70891;
		date = "January 7, 2014";
	}

	// Constructor
	Employee(string employee_name, int employee_number, string hire_date)
	{
		name = employee_name;
		number = employee_number;
		date = hire_date;
	}

	~Employee()
	{
		cout << "Leaving Employee Program" << endl;
	}

	string getName() const
	{
		return name;
	}

	int getNumber() const
	{
		return number;
	}
	
	string getDate() const
	{
		return date;
	}

};
