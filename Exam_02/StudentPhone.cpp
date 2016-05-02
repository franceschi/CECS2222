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

StudentPhone::~StudentPhone()
{
	cout << "Phone object destructor for phone:" << endl;
	delete[] areaCode;
	delete[] exchange;
	delete[] line;
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

void StudentPhone::printPhone() const
{
	cout << "(" << getAreaCode() << ")" << getExchange() << "-" << getLine() << endl;
}
