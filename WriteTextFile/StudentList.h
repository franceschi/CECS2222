#include "StudentPhone.h"
#include "StudentDate.h"
using namespace std;
#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <iostream>

class StudentList
{
private:
	char firstName[25];
	char lastName[25];
	Date birthDate;
	Phone phone;

public:
	StudentList(const char *const, const char *const, const Date &, const Phone &);
	StudentList(const StudentList &);
	StudentList();
	~StudentList();

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

#endif // STUDENTLIST_H
