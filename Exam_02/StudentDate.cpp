#include "StudentDate.h"

StudentDate::StudentDate()
{
	setValues(12, 31, 2000);
}

StudentDate::StudentDate(int tempMonth, int tempDay, int tempYear)
{
	setValues(tempMonth, tempDay, tempYear);
}

StudentDate::StudentDate(const StudentDate &tempDate)
{
	setValues(tempDate.getMonth(), tempDate.getDay(), tempDate.getYear());
}

StudentDate::~StudentDate()
{
	cout << "Date object destructor: " << endl;
}

void StudentDate::printDate() const
{
	cout << month << "/" << day << "/" << year << endl;
}

void StudentDate::setValues(int tempMonth, int tempDay, int tempYear)
{
	setMonth(tempMonth);
	setDay(tempDay);
	setYear(tempYear);

}

void StudentDate::setMonth(int tempMonth)
{
	this->month = checkMonth(tempMonth);
}

void StudentDate::setDay(int tempDay)
{
	this->day = checkDay(tempDay);
}

void StudentDate::setYear(int tempYear)
{
	this->year = tempYear;
}

int StudentDate::getMonth() const
{
	return this->month;
}

int StudentDate::getDay() const
{
	return this->day;
}

int StudentDate::getYear() const
{
	return this->year;
}

int StudentDate::checkMonth(int tempMonth) const
{
	if (tempMonth >= 1 && tempMonth <= 12)
	{
		return(tempMonth);
	}
	else
	{
		cout << "Invalid month (" << tempMonth << ") set to 1\n";

		return 1;
	}
}

int StudentDate::checkDay(int tempDay) const //utility function
{
	static const int dayPerMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	if (tempDay > 0 && tempDay <= dayPerMonth[month])
	{
		return tempDay;
	}
	else if (month == 2 && tempDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
	{
		return tempDay;
	}
	else
	{
		cout << "Invalid Day (" << tempDay << ") set to 1\n";

		return 1;
	}

}
