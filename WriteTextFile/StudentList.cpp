#include "StudentList.h"


StudentList::StudentList()
{
	strcpy_s(firstName, "Juan");
	strcpy_s(lastName, "Del pueblo");
}

StudentList::StudentList(const char *const tempFirstName, const char *const tempLastName, const Date &tempBirthDate, const Phone &tempPhone)
{
	setFirstName(tempFirstName);
	setLastName(tempLastName);
	setDate(tempBirthDate);
	setPhone(tempPhone);
}

StudentList::StudentList(const StudentList &tempStudentList)
{
	setFirstName(tempStudentList.getFirstName());
	setLastName(tempStudentList.getLastName());
	setDate(tempStudentList.getDate());
	setPhone(tempStudentList.getPhone());
}

StudentList::~StudentList()
{
	cout << "StudentList destructor:" << endl;
	printData();
}

void StudentList::setValues(const char *const tempFirstName, const char *const tempLastName, const Date &tempBirthDay, const Phone &tempPhone)
{
	setFirstName(tempFirstName);
	setLastName(tempLastName);
	setDate(tempBirthDay);
	setPhone(tempPhone);
}

void StudentList::setFirstName(const char *const tempFirstName)
{
	int lenght;
	lenght = strlen(tempFirstName);
	strncpy_s(firstName, tempFirstName, lenght);
	lenght = (lenght< 25) ? lenght : 24;
	firstName[lenght] = '\0';
}

void StudentList::setLastName(const char *const tempLastName)
{
	int lenght;
	lenght = strlen(tempLastName);
	strncpy_s(lastName, tempLastName, lenght);
	lenght = (lenght< 25) ? lenght : 24;
	lastName[lenght] = '\0';
}



void StudentList::setPhone(const Phone &tempPhone)
{
	phone.setAreaCode(tempPhone.getAreaCode());
	phone.setExchange(tempPhone.getExchange());
	phone.setLine(tempPhone.getLine());
}

void StudentList::setDate(const Date &tempDate)
{
	birthDate.setMonth(tempDate.getMonth());
	birthDate.setDay(tempDate.getDay());
	birthDate.setYear(tempDate.getYear());
}

const char * StudentList::getFirstName() const
{
	return firstName;
}

const char *StudentList::getLastName() const
{
	return lastName;
}

const Phone& StudentList::getPhone()const
{
	return phone;
}

const Date& StudentList::getDate()const
{
	return birthDate;
}

void StudentList::printData()const
{
	cout << "First Name:" << this->getFirstName() << endl;
	cout << "Last Name:" << this->getLastName() << endl;
	cout << "Phone:";
	phone.printPhone();
	cout << "Birthdate:";
	birthDate.printDate();
}

