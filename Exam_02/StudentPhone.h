#include<cstring>
#include<iostream>

using namespace std;

#ifndef STUDENTPHONE_H
#define STUDENTPHONE_H


class StudentPhone
{
private:
	char *areaCode;     //3-digit area code
	char *exchange;      //3 digit exchange
	char *line;           //4 digit of line

public:
	StudentPhone(const char *, const char *, const char *);
	StudentPhone(const StudentPhone &);
	StudentPhone();
	~StudentPhone();

	void setValues(const char *, const char *, const char *);
	void setAreaCode(const char *);
	void setExchange(const char *);
	void setLine(const char *);

	const char *getAreaCode() const;
	const char *getExchange() const;
	const char *getLine() const;

	void printPhone() const;
};

#endif // STUDENTPHONE_H
