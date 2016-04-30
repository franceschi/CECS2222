#include "StudentPhone.h"
#include<iostream>
#include<cstring>
using namespace::std;

Phone::Phone()
{
	areaCode = "000";
	exchange="000";
	line="0000";
}//end Phone

Phone::Phone( const char *tempAreaCode, const char *tempExchange, const char *tempLine)
{         
	setAreaCode(tempAreaCode);
	setExchange(tempExchange);
	setLine(tempLine);
}//end Phone constructor

Phone::Phone(const Phone &tempPhone) 
{ 
	setAreaCode(tempPhone.areaCode);
	setExchange(tempPhone.exchange);  
	setLine(tempPhone.line); 
}//end Phone copy constructor 

void Phone::setAreaCode(const char *tempAreaCode) 
{ 
	areaCode = new char[strlen(tempAreaCode) + 1];  
	strcpy(areaCode, tempAreaCode); 
}//end setAreaCode 

void Phone::setExchange( const char *tempExchange) 
{
	exchange = new char[strlen(tempExchange) + 1];  
	strcpy(exchange,tempExchange); 
}//end setExchange

void Phone::setLine(const char *tempLine) 
{
	line = new char[strlen(tempLine) + 1];       
	strcpy(line, tempLine);
}//end setLine 

void Phone::setValues( const char *tempAreaCode,  const char *tempExchange, const char *tempLine)   
{
	setAreaCode(tempAreaCode);  
	setExchange(tempExchange);  
	setLine(tempLine); 
}//end setValues 

Phone::~Phone() 
{
	cout<<"Phone object destructor for phone:"<<endl;  
	printPhone();  //delete [] areaCode;  //delete [] exchange;  //delete [] line; 
}//end Phone destructor

const char *Phone::getAreaCode() const 
{ 
	return areaCode; 
}//end getAreaCode 

const char *Phone::getExchange() const 
{ 
	return exchange; 
}//end getExchange 

const char *Phone::getLine() const 
{  
	return line; 
}//end getLine 

void Phone::printPhone() const 
{ 
	cout << "(" << getAreaCode() << ")" << getExchange() << "-" << getLine() << endl; 
}//end printPhone 