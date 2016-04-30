#pragma once
#include "StudentPhone.h"
#include "StudentDate.h"
#include <iostream>
#include "MyString.h"
using namespace std;

class Student
{
private:
	MyString firstName;
	MyString lastName;
	Date birthDate;
	Phone phone;


public:
	Student(const char *const, const char *const, const Date &, const Phone &);
	Student(const Student &);
	Student();
	~Student();

	void setValues(const char *const, const char *const, const Date &, const Phone &);
	void setFirstName(const char *const);
	void setLastName(const char *const);
	void setPhone(const Phone &tempPhone);
	void setDate(const Date &tempDate);

	const char *getFirstName() const;
	const char *getLastName() const;
	const Date& getDate() const;
	const Phone& getPhone()const;

	void printData()const;
};

