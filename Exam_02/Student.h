#include "StudentPhone.h"
#include "StudentDate.h"
#include "TestScore.h"

#ifndef STUDENT_H
#define STUDENT_H

const int MAXSCORE = 10;

class Student
{
    friend istream & operator >>(istream &, Student &);
    friend ostream & operator <<(ostream &, const Student &);

    private:
        MyString firstName;
        MyString lastName;
        MyString id;
        StudentDate birthDate;
        StudentPhone phone;
        TestScore score[MAXSCORE];

    public:
        Student();
        Student(const MyString &, const MyString &, const MyString &, const StudentDate &, const StudentPhone &, const TestScore &);
        Student(const Student &);
        ~Student();

        void setValues(const MyString &, const MyString &, const MyString &, const StudentDate &, const StudentPhone &, const TestScore &);
        void setFirstName(const MyString &);
        void setLastName(const MyString &);
        void setID(const MyString &);
        void setBirthDate(const StudentDate &);
        void setPhone(const StudentPhone &);
        void setTestScore(const TestScore &);

        const MyString & getFirstName() const;
        const MyString & getLastName() const;
        const MyString & getID() const;
        const StudentDate & getBirthDate() const;
        const StudentPhone & getPhone()const;
        const TestScore & getTestScore () const;

        Student & operator =(const Student &);
};

#endif // STUDENTLIST_H
