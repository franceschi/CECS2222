#include "StudentPhone.h"

using namespace::std;


StudentPhone::StudentPhone()
{
	areaCode = "000";
	exchange = "000";
	line = "0000";
}

StudentPhone::StudentPhone(const char *tempAreaCode, const char *tempExchange, const char *tempLine)
{
	setAreaCode(tempAreaCode);
	setExchange(tempExchange);
	setLine(tempLine);
}

StudentPhone::StudentPhone(const StudentPhone &tempPhone)
{
	setAreaCode(tempPhone.getAreaCode());
	setExchange(tempPhone.getExchange());
	setLine(tempPhone.getLine());
}

StudentPhone::~StudentPhone()
{
	cout << "Phone object destructor for phone: " << endl;
	delete[] areaCode;
	delete[] exchange;
	delete[] line;
}

void StudentPhone::setAreaCode(const char *tempAreaCode)
{
	areaCode = new char[strlen(tempAreaCode) + 1];
	strcpy(areaCode, tempAreaCode);
}

void StudentPhone::setExchange(const char *tempExchange)
{
	exchange = new char[strlen(tempExchange) + 1];
	strcpy(exchange, tempExchange);
}

void StudentPhone::setLine(const char *tempLine)
{
	line = new char[strlen(tempLine) + 1];
	strcpy(line, tempLine);
}

void StudentPhone::setValues(const char *tempAreaCode, const char *tempExchange, const char *tempLine)
{
	setAreaCode(tempAreaCode);
	setExchange(tempExchange);
	setLine(tempLine);
}



const char *StudentPhone::getAreaCode() const
{
	return areaCode;
}

const char *StudentPhone::getExchange() const
{
	return exchange;
}

const char *StudentPhone::getLine() const
{
	return line;
}

StudentPhone & StudentPhone::operator =(const StudentPhone & tempPhone)
{
	this->areaCode = tempPhone.areaCode;
	this->exchange = tempPhone.exchange;
	this->line = tempPhone.line;

	return (*this);
}

istream & operator >> (istream & in, StudentPhone & tempPhone)
{
	StudentPhone temp;

	temp.areaCode = new char[4];
	temp.exchange = new char[4];
	temp.line = new char[5];

	cout << "Enter Phone Number: " << endl;
	cout << "Enter 3 Digit area code: ";
	in >> temp.areaCode;

	cout << "Enter 3 digit exchange: ";
	in >> temp.exchange;

	cout << "Enter 4 digit line: ";
	in >> temp.line;

	tempPhone = temp;

	return in;
}

ostream & operator <<(ostream  & out, const StudentPhone & tempPhone)
{
	out << "(" << tempPhone.getAreaCode() << ")" << tempPhone.getExchange() << "-" << tempPhone.getLine();

	return out;
}