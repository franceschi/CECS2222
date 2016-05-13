#pragma once
#include<cstring>
#include<iostream>

using namespace std;

class StudentPhone
{
	friend istream & operator >> (istream &, StudentPhone &);
	friend ostream & operator << (ostream &, const StudentPhone &);

private:
	char *areaCode;     
	char *exchange;      
	char *line;           

public:
	StudentPhone();
	StudentPhone(const char *, const char *, const char *);
	StudentPhone(const StudentPhone &);
	~StudentPhone();

	void setValues(const char *, const char *, const char *);
	void setAreaCode(const char *);
	void setExchange(const char *);
	void setLine(const char *);

	const char *getAreaCode() const;
	const char *getExchange() const;
	const char *getLine() const;

	StudentPhone & operator =(const StudentPhone &);
};

