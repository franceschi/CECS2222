#include<iostream> 
using namespace::std; 
#include "studentDate.h" 

Date::Date(int tempMonth, int tempDay, int tempYear) : month(tempMonth), day(tempDay), year(tempYear) { }//end constructor 
Date::Date(const Date &tempDate) {  
	this->month=tempDate.month;  
	this->day=tempDate.day;  
	this->year=tempDate.year; 

}//end Date constructor 