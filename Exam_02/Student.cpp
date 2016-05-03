#include "Student.h"

istream & operator >>(istream & in, Student & tempStudent)
{
    cout << "First Name: ";
    in >> tempStudent.firstName;

    cout << "Last Name: ";
    in >> tempStudent.lastName;

    cout << "Id: ";
    in >> tempStudent.id;

    cout << "BirthDate: \nmm/dd/yyyy: " << endl;
    in >> tempStudent.birthDate;

    cout << "Phone ### ### ####: ";
    in >> tempStudent.phone;

    return in;
}

ostream & operator <<(ostream & out, const Student & tempStudent)
{
    out << "First Name:" << tempStudent.getFirstName() << endl;
    out << "Last Name:" << tempStudent.getLastName() << endl;
    out << "Id:" << tempStudent.getID() << endl;
    out << "Phone:" << tempStudent.getPhone() << endl;
    out << "Birthdate:" << tempStudent.getBirthDate() << endl;

    return out;
}

Student::Student()
{
}

Student::Student(const MyString & tempFirstName, const MyString & tempLastName, const MyString & tempID,
                 const StudentDate & tempBirthDate, const StudentPhone & tempPhone, const TestScore<double> & tempScore)
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
    cout<<"Student destructor:"<<endl;
}

void Student::setValues(const MyString & tempFirstName, const MyString & tempLastName, const MyString & tempID,
                        const StudentDate & tempBirthDate, const StudentPhone & tempPhone, const TestScore<double> & tempScore)
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

void Student::setTestScore(const TestScore<double> & tempScore)
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

const TestScore<double>& Student::getTestScore() const
{
	return (this->getTestScore);
}

const StudentDate & Student::getBirthDate()const
{
    return (this->birthDate);
}

Student & Student::operator =(const Student & tempStudent)
{
    this->firstName = tempStudent.getFirstName();
    this->lastName = tempStudent.getLastName();
    this->id = tempStudent.getID();
    this->birthDate = tempStudent.getBirthDate();
    this->phone = tempStudent.getPhone();

    return (*this);
}
