#pragma once
#include "Employee.h" 

class ProductionWorker: public Employee
{
protected:
	int shift;
	double pay;
public:

	ProductionWorker():Employee()
	{
		shift = 1;
		pay = 15.35;
	}

	ProductionWorker(string employee_name, int employee_number, string hire_date, int shift_day, double pay_rate ) :Employee(employee_name, employee_number, hire_date)
	{
		shift = shift_day;
		pay = pay_rate;
	}

	~ProductionWorker()
	{
		cout << "Exit Production Worker\n";
	}

	int  getShift() const
	{
		if (shift == 1)
			cout << "Day Shift";
		else if (shift == 2)
			cout << "Night Shift";
		else
			cerr << "Wrong shift number!";
		return shift;
	}

	double getPay() const
	{
		return pay;
	}

};

//
