#include "StudentPhone.h"

using namespace::std;


StudentPhone::StudentPhone()
{
	areaCode = 000;
	exchange = 000;
	line = 0000;
	cellPhone++;
}

StudentPhone::StudentPhone(int tempAreaCode, int tempExchange, int tempLine)
{
	setAreaCode(tempAreaCode);
	setExchange(tempExchange);
	setLine(tempLine);
	cellPhone++;
}

StudentPhone::StudentPhone(const StudentPhone &tempPhone)
{
	setAreaCode(tempPhone.getAreaCode());
	setExchange(tempPhone.getExchange());
	setLine(tempPhone.getLine());
	cellPhone++;
}

StudentPhone::~StudentPhone()
{
	areaCode = 0;
	exchange = 0;
	line = 0;
}

void StudentPhone::setValues( int tempAreaCode, int tempExchange, int tempLine)
{
	setAreaCode(tempAreaCode);
	setExchange(tempExchange);
	setLine(tempLine);
}

void StudentPhone::setAreaCode(const int)
{
	this->areaCode = areaCode;
}

void StudentPhone::setExchange(const int)
{
	this->exchange = exchange;
}

void StudentPhone::setLine(const int)
{
	this->line = line;
}

int StudentPhone::getAreaCode() const
{
	return areaCode;
}

int StudentPhone::getExchange() const
{
	return exchange;
}

int StudentPhone::getLine() const
{
	return line;
}

int StudentPhone::getCellPhone() const
{
	return cellPhone;
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
	
	cout << "\nEnter 3 Digit area code: ";
	in >> tempPhone.areaCode;

	cout << "Enter 3 digit exchange: ";
	in >> tempPhone.exchange;

	cout << "Enter 4 digit line: ";
	in >> tempPhone.line;

	return in;
}

ostream & operator <<(ostream  & out, const StudentPhone & tempPhone)
{
	out << "(" << tempPhone.getAreaCode() << ")" << tempPhone.getExchange() << "-" << tempPhone.getLine();

	return out;
}