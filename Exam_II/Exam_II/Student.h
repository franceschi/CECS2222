#pragma once
#include "MyString.h"
#include "StudentPhone.h"
#include "StudentDate.h"
#include "TestScore.h"


const int MAXSCORE = 10;

class Student
{
	friend istream & operator >> (istream &, Student &);
	friend ostream & operator <<(ostream &, const Student &);

private:
	MyString firstName;
	MyString lastName;
	MyString id;
	StudentDate birthDate;
	StudentPhone phone;
	StudentTestScores tests;
	

public:
	Student();
	Student(const MyString &, const MyString &, const MyString &, const StudentDate &, const StudentPhone &);
	Student(const Student &);
	~Student();

	void setValues(const MyString &, const MyString &, const MyString &, const StudentDate &, const StudentPhone &);
	void setFirstName(const MyString &);
	void setLastName(const MyString &);
	void setID(const MyString &);
	void setBirthDate(const StudentDate &);
	void setPhone(const StudentPhone &);
	void setStudentTestScore(const StudentTestScores &);


	const MyString & getFirstName() const;
	const MyString & getLastName() const;
	const MyString & getID() const;
	const StudentDate & getBirthDate() const;
	const StudentPhone & getPhone()const;
	const StudentTestScores & getScores() const;

	Student & operator =(const Student &);
};

