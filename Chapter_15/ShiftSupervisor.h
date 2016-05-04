#pragma once
#include "Employee.h"
class ShiftSupervisor :
	public Employee
{
protected:
	double salary;
	double bonus;
public:

	ShiftSupervisor():Employee()
	{
		salary = 0;
		bonus = 999.99;
	}

	ShiftSupervisor(string employee_name, int employee_number, string hire_date, double annual_salary, double production_bonus) :Employee(employee_name, employee_number, hire_date)
	{
		salary = annual_salary;
		bonus = production_bonus;
	}


	~ShiftSupervisor()
	{
		cout << "Exit Shift Supervisor\n";
	}

	int  getSalary() const
	{
		return salary;
	}

	double getBonus() const
	{
		return bonus;
	}
};
