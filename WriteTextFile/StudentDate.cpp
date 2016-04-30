#include<iostream> 
using namespace::std; 
#include "studentDate.h" 

Date::Date(int tempMonth, int tempDay, int tempYear) : month(tempMonth), day(tempDay), year(tempYear) { }//end constructor 
Date::Date(const Date &tempDate) {  
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