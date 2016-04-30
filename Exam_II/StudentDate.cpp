#include<iostream> 
using namespace::std; 
#include "StudentDate.h" 

Date::Date(int tempMonth, int tempDay, int tempYear) : month(tempMonth), day(tempDay), year(tempYear) { }//end constructor 
Date::Date(const Date &tempDate) 
{  
	this->month=tempDate.month;  
	this->day=tempDate.day;  
	this->year=tempDate.year; 

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
	}//end if 
	else 
		{       
			cout<<"Invalid month ("<<tempMonth<<") set to 1\n";
			return 1; 
		}//end if 
}//end checkMonth

int Date::checkDay(int tempDay) const //utility function 
{  
	static const int dayPerMonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 

	if (tempDay > 0 && tempDay <= dayPerMonth[month]) 
	{ 
		return tempDay; 
	}//end if   
	if ( month == 2 && tempDay==29 &&  (year % 400 == 0 || (year %4 == 0 && year %100 !=0 ) ) )   
		{    
			return tempDay;  
		}   
		cout<<"Invalid Day ("<<tempDay<<") set to 1\n";   
		return 1; 
}//end checkDay