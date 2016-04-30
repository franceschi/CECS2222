#include<iostream> 
using namespace::std; 
#include "StudentDate.h" 

Date::Date(int tempMonth, int tempDay, int tempYear)
{
	setValues(tempMonth, tempDay, tempYear);
}
Date::Date(const Date &tempDate)

{  
	setMonth(tempDate.month);
	setDay(tempDate.month);
	setYear(tempDate.month);
	
}//end Date constructor 

Date::~Date() 
{ 
	cout << "Date object destructor: " << endl;  
	printDate(); 
}//end 

void Date::printDate() const 
{
	cout<<month<<"/"<<day<<"/"<<year<<endl; 
}//end printDate 

void Date::setValues(int tempMonth,int tempDay,int tempYear) 
{  
	setMonth(tempMonth);  
	setDay(tempDay);  
	setYear(tempYear); 

}//end setValues 

void Date::setMonth(int tempMonth) 
{ 
	this->month = checkMonth(tempMonth); 
} //end setMonth 

void Date::setDay(int tempDay) 
{ 
	this->day = checkDay(tempDay); 
}//end setDay 

void Date::setYear(int tempYear) 
{ 
	this->year = tempYear; 
}//end setYear 

int Date::getMonth() const 
{ 
	return this->month; 
}//end getMonth
int Date::getDay() const 
{ 
	return this->day; 
}//end getDay 
int Date::getYear() const 
{
	return this->year; 
}//end getYear 

int Date::checkMonth(int tempMonth) const
{  
	if(tempMonth >=1 && tempMonth <= 12) 
	{      
		return(tempMonth); 
	}
	else 
		{       
			cout<<"Invalid month ("<<tempMonth<<") set to 1\n";
			return 1; 
		}
}//end checkMonth

int Date::checkDay(int tempDay) const
{  
	static const int dayPerMonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 

	if (tempDay > 0 && tempDay <= dayPerMonth[month]) 
	{ 
		return tempDay; 
	}
	else if ( month == 2 && tempDay==29 &&  (year % 400 == 0 || (year %4 == 0 && year %100 !=0 ) ) )   
		{    
			return tempDay;  
		} 
	else
		cout<<"Invalid Day ("<<tempDay<<") set to 1\n";   
		return 1; 
}//end checkDay