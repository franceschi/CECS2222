#pragma once
#include<cstring>
#include<iostream>

using namespace std;

class StudentPhone
{
	friend istream & operator >> (istream &, StudentPhone &);
	friend ostream & operator << (ostream &, const StudentPhone &);

private:
	int areaCode;     
	int exchange;      
	int line;
	int cellPhone;

public:
	
	StudentPhone(int, int, int);
	StudentPhone(const StudentPhone &);
	StudentPhone();
	~StudentPhone();

	void setValues(int, int, int);
	void setAreaCode(int);
	void setExchange(int);
	void setLine(int);

	int getAreaCode() const;
	int getExchange() const;
	int getLine() const;
	int getCellPhone() const;

	StudentPhone & operator =(const StudentPhone &);

};

