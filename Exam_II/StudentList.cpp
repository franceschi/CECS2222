#include "StudentList.h"

StudentList::StudentList()
{
    strcpy(firstName,"Juan");
    strcpy(lastName,"Del pueblo");
}

StudentList::StudentList(const char *const tempFirstName, const char *const tempLastName , const Date &tempBirthDate,const Phone &tempPhone)
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
    cout<<"StudentList destructor:"<<endl;
    printData();
}

void StudentList::setValues(const char *const tempFirstName, const char *const tempLastName, const Date &tempBirthDay,const Phone &tempPhone)
{
    setFirstName(tempFirstName);
    setLastName(tempLastName);
    setDate(tempBirthDay);
    setPhone(tempPhone);
}

void StudentList::setFirstName(const char *const tempFirstName)
{
    int lenght;
    lenght=strlen(tempFirstName);
    strncpy_s(firstName,tempFirstName,lenght);
    lenght = (lenght< 25)? lenght:24;
    firstName[lenght] = '\0';
}

void StudentList::setLastName(const char *const tempLastName)
{
    int lenght;
    lenght=strlen(tempLastName);
    strncpy_s(lastName,tempLastName,lenght);
    lenght = (lenght< 25)? lenght:24;
    lastName[lenght] = '\0';
}

void Student::setPhone(const Phone &tempPhone)
{
    phone.setAreaCode(tempPhone.getAreaCode());
    phone.setExchange(tempPhone.getExchange());
    phone.setLine(tempPhone.getLine());
}

void Student::setDate(const Date &tempDate)
{
    birthDate.setMonth(tempDate.getMonth());
    birthDate.setDay(tempDate.getDay());
    birthDate.setYear(tempDate.getYear());
}

const char * Student::getFirstName() const
{
    return firstName;
}

const char *Student::getLastName() const
{
return lastName;
}

const Phone& Student::getPhone()const
{
    return phone;
}

const Date& Student::getDate()const
{
    return birthDate;
}

void Student::printData()const
{
    cout<<"First Name:"<<this->getFirstName()<<endl;
    cout<<"Last Name:"<<this->getLastName()<<endl;
    cout<<"Phone:";
    phone.printPhone();
    cout<<"Birthdate:";
    birthDate.printDate();
}
