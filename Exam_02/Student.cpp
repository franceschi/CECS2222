#include "Student.h"

istream & operator >> (istream & in, Student & tempStudent)
{
	cout << "First Name: ";
	in >> tempStudent.firstName;

	cout << "Last Name: ";
	in >> tempStudent.lastName;

	cout << "Id: ";
	in >> tempStudent.id;

	cout << "BirthDatemm/dd/yyyy: ";
	in >> tempStudent.birthDate;

	cout << "Phone ### ### ####: ";
	in >> tempStudent.phone;

	return in;
}

ostream & operator <<(ostream & out, Student & tempStudent)
{
	out << "First Name:" << tempStudent.firstName << endl;
	out << "Last Name:" << tempStudent.lastName << endl;
	out << "Id:" << tempStudent.id << endl;
	out << "Phone:" << tempStudent.phone << endl;
	out << "Birthdate:" << tempStudent.birthDate << endl;

	return output;
}

Student::Student()
{
}

Student::Student(const MyString & tempFirstName, const MyString & tempLastName, const MyString & tempID,
	const StudentDate & tempBirthDate, const StudentPhone & tempPhone, const TestScore & tempScore)
{
	setFirstName(tempFirstName);
	setLastName(tempLastName);
	setID(tempID);
	setBirthDate(tempBirthDate);
	setPhone(tempPhone);
}

Student::Student(const Student & tempStudent)
{
	setFirstName(tempStudent.getFirstName());
	setLastName(tempStudent.getLastName());
	setID(tempStudent.getID());
	setBirthDate(tempStudent.getBirthDate());
	setPhone(tempStudent.getPhone());
}

Student::~Student()
{
	cout << "Student destructor:" << endl;
	printData();
}

void Student::setValues(const MyString & tempFirstName, const MyString & tempLastName, const MyString & tempID,
	const StudentDate & tempBirthDate, const StudentPhone & tempPhone, const TestScore & tempScore)
{
	setFirstName(tempFirstName);
	setLastName(tempLastName);
	setID(tempID);
	setBirthDate(tempBirthDate);
	setPhone(tempPhone);
}

void Student::setFirstName(const MyString & tempFirstName)
{
	this->firstName = tempFirstName;
}

void Student::setLastName(const MyString & tempLastName)
{
	this->lastName = tempLastName;
}

void Student::setID(const MyString & tempID)
{
	this->id = tempID;
}

void Student::setPhone(const StudentPhone & tempPhone)
{
	phone.setAreaCode(tempPhone.getAreaCode());
	phone.setExchange(tempPhone.getExchange());
	phone.setLine(tempPhone.getLine());
}

void Student::setBirthDate(const StudentDate & tempDate)
{
	birthDate.setMonth(tempDate.getMonth());
	birthDate.setDay(tempDate.getDay());
	birthDate.setYear(tempDate.getYear());
}

void Student::setTestScore(const TestScore & tempScore)
{

}

const MyString & Student::getFirstName() const
{
	return (this->firstName);
}

const MyString & Student::getLastName() const
{
	return (this->lastName);
}

const MyString & Student::getID() const
{
	return (this->id);
}

const StudentPhone & Student::getPhone()const
{
	return (this->phone);
}

const StudentDate & Student::getBirthDate()const
{
	return (this->birthDate);
}

Student & Student::operator =(const Student & tempStudent)
{
	setFirstName(tempStudent.getFirstName());
	setLastName(tempStudent.getLastName());
	setID(tempStudent.getID());
	setBirthDate(tempStudent.getBirthDate());
	setPhone(tempStudent.getPhone());

	return (*this);
}

void Student::printData()const
{
	cout << "First Name:" << this->getFirstName() << endl;
	cout << "Last Name:" << this->getLastName() << endl;
	cout << "Phone:";
	phone.printPhone();
	cout << "Birthdate:";
	birthDate.printDate();
}
