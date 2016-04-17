#pragma once 
#include "student.h" 
const int MAX_STD = 10; //Cantidad maxima del arreglo
class studentList
{ 
	friend ostream &operator<<(ostream &, const studentList &); 
	friend istream &operator>>(istream &, studentList &); 
private: 
	Student stdt[MAX_STD]; 
	int size; 
	void sortStudent(); 
public: 
	studentList(); 
	studentList(const studentList &); 
	~studentList(); 
	studentList &operator=(const studentList &); 
	void operator+=(const Student&);  //add student
	bool searchStudent(const MyString &) const; 
	bool searchStudent(const char *) const; 
	bool searchStudent(const Student &) const; 
	int subscriptStudent(const MyString &) const; 
	int subscriptStudent(const char *) const; 
	int subscriptStudent(const Student &) const; 
	void operator-=(const MyString &); 
	void operator-=(const char *); 
	bool isEmpty() const; 
	bool isFull() const; 
	int getSize() const; 
	Student&operator[] (int); 
	Student operator[] (int) const;
};//end studentList class