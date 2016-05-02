#include"Student.h"

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

const int MAX_STD = 10;

class StudentList
{
	friend istream & operator >> (istream &, StudentList &);
	friend ostream & operator <<(ostream &, const StudentList &);

private:
	Student stdt[MAX_STD];
	int size;
	void sortStudent();

public:

	StudentList();
	StudentList(const StudentList &);
	~StudentList();

	int getSize() const;

	bool searchStudent(const MyString &) const;
	bool searchStudent(const char *) const;
	bool searchStudent(const Student &) const;

	int subscriptStudent(const MyString&) const;
	int subscriptStudent(const char *) const;
	int subscriptStudent(const Student &) const;

	bool isEmpty() const;
	bool isFull() const;

	StudentList & operator=(const StudentList&);
	void operator +=(const Student&);
	void operator -=(const MyString&);
	void operator -=(const char *);
	Student &operator [](int);
	Student operator [](int) const;

};

#endif
