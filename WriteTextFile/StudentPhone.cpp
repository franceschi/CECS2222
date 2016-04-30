#include "StudentPhone.h"
#include<iostream>
#include "MyString.h"
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
}

Phone::Phone(const Phone &tempPhone) 
{ 
	setAreaCode(tempPhone.areaCode);
	setExchange(tempPhone.exchange);  
	setLine(tempPhone.line); 
}

void Phone::setAreaCode(const char *tempAreaCode) 
{ 
	areaCode = new char[strlen(tempAreaCode) + 1];  
	strcpy(areaCode, tempAreaCode); 
}

void Phone::setExchange( const char *tempExchange) 
{
	exchange = new char[strlen(tempExchange) + 1];  
	strcpy(exchange,tempExchange); 
}

void Phone::setLine(const char *tempLine) 
{
	line = new char[strlen(tempLine) + 1];       
	strcpy(line, tempLine);
}

void Phone::setValues( const char *tempAreaCode,  const char *tempExchange, const char *tempLine)   
{
	setAreaCode(tempAreaCode);  
	setExchange(tempExchange);  
	setLine(tempLine); 
}

Phone::~Phone() 
{
	cout<<"Phone object destructor:"<<endl;  
	printPhone();  
	delete [] areaCode;  
	delete [] exchange;  
	delete [] line;

}

const char *Phone::getAreaCode() const 
{ 
	return areaCode; 
}

const char *Phone::getExchange() const 
{ 
	return exchange; 
}

const char *Phone::getLine() const 
{  
	return line; 
}

void Phone::printPhone() const 
{ 
	cout << "(" << getAreaCode() << ")" << getExchange() << "-" << getLine() << endl; 
}