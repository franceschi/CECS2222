#include <iostream>
using namespace std;
#include "StudentList.h"


StudentList::StudentList(const StudentList &tempStudentList) :size(tempStudentList.size)
{
	for (int i = 0; i < getSize(); i++)
	{
		*(stdt + i) = *(tempStudentList.stdt + i);
	}
}

StudentList::StudentList()
{
	size = 0;
}

StudentList::~StudentList()
{
}

void StudentList::sortStudent()
{
	Student temp;
	bool switched = true;
	for (int pass = 0; pass < (this->getSize() - 1) && switched; pass++)
	{
		switched = false;
		for (int j = 0; j < (this->getSize() - pass - 1); j++)
		{
			if ((*this)[j].getID() >(*this)[j + 1].getID())
			{
				temp = stdt[j];
				stdt[j] = stdt[j + 1];
				stdt[j + 1] = temp;
				switched = true;
			}
		}
	}
}

StudentList &StudentList::operator=(const StudentList &tempStudentList)
{
	int i;
	size = tempStudentList.size;
	for (i = 0; i < getSize(); i++)
	{
		stdt[i] = tempStudentList.stdt[i];
	}
	return *this;
}

void StudentList::operator+=(const Student & tempStudent)
{
	if (!isFull() && !searchStudent(tempStudent))
	{
		*(stdt + size) = tempStudent;
		this->size++;
		this->sortStudent();
	}
	else
	{
		cout << "Array is full or repeatedly ID" << endl;
	}
}

bool StudentList::searchStudent(const MyString &tempID) const
{
	bool found = false;
	MyString temp;
	for (int i = 0; i < this->getSize(); i++)
	{
		temp = stdt[i].getID();
		if (temp == tempID)
		{
			found = true;
			i = size;
		}
	}
	return found;
}

bool StudentList::searchStudent(const char *tempID) const
{
	bool found = false;
	MyString temp;
	for (int i = 0; i < this->getSize(); i++)
	{
		temp = stdt[i].getID();
		cout << temp << " " << tempID << endl;
		if (temp == tempID)
		{
			found = true;
			i = size;
		}
	}
	return found;
}

bool StudentList::searchStudent(const Student &tempStudent) const
{
	bool found = false;
	for (int i = 0; i < this->getSize(); i++)
	{
		if (stdt[i].getID() == tempStudent.getID())
		{
			found = true;
			i = size;
		}
	}
	return found;
}

int StudentList::subscriptStudent(const MyString &tempID) const
{
	int subscript = -1;
	MyString temp;
	for (int i = 0; i < this->getSize(); i++)
	{
		temp = stdt[i].getID();
		if (temp == tempID)
		{
			subscript = i;
			i = size;
		}
	}
	return subscript;
}

int StudentList::subscriptStudent(const char *tempID) const
{
	int subscript = -1;
	MyString temp;
	for (int i = 0; i < this->getSize(); i++)
	{
		temp = stdt[i].getID();
		if (temp == tempID)
		{
			subscript = i;
			i = size;
		}
	}
	return subscript;
}

int StudentList::subscriptStudent(const Student &tempStudent) const
{
	int subscript = -1;
	for (int i = 0; i < this->getSize(); i++)
	{
		if (stdt[i].getID() == tempStudent.getID())
		{
			subscript = i;
			i = size;
		}
	}
	return subscript;
}

void StudentList::operator-=(const MyString &tempID)
{
	int subscript;
	if (!isEmpty() && searchStudent(tempID))
	{
		subscript = subscriptStudent(tempID);
		for (int i = subscript; i < getSize() - 1; i++)
		{
			*(stdt + i) = *(stdt + (i + 1));
		}
		size--;
	}
	else
	{
		cout << "Invalid ID" << endl;
	}
}

void StudentList::operator-=(const char *tempID)
{
	int subscript;
	if (!isEmpty() && searchStudent(tempID))
	{
		subscript = subscriptStudent(tempID);
		for (int i = subscript; i<getSize() - 1; i++)
		{
			*(stdt + i) = *(stdt + (i + 1));
		}
		size--;
	}
	else
	{
		cout << "Invalid ID" << endl;
	}
}

bool StudentList::isEmpty() const
{
	return(this->size == 0);
}

bool StudentList::isFull() const
{
	return(this->size == MAX_STD);
}

int StudentList::getSize() const
{
	return (this->size);
}

Student &StudentList::operator[] (int subscript)
{
	if ((subscript < 0) || (subscript >= getSize()))
	{
		cout << "Error: Subscript " << subscript << " out of range \n";
		exit(1);
	}
	return stdt[subscript];
}

Student StudentList::operator[] (int subscript) const
{
	if ((subscript < 0) || (subscript >= getSize()))
	{
		cout << "Error: Subscript " << subscript << " out of range \n";
		exit(1);
	}
	return stdt[subscript];
}

istream & operator >> (istream &input, StudentList &tempStudentList)
{
	int i, n;
	Student tempStudent;
	cout << "Enter the number of students: ";
	input >> n;
	for (i = 0; i < n; i++)
	{
		input >> tempStudent;
		while (tempStudentList.searchStudent(tempStudent) && (tempStudentList.size != 0))
		{
			cout << "Enter again the student #[" << i + 1 << "]:\n";
			input >> tempStudent;
		}
		tempStudentList.stdt[i] = tempStudent;
		tempStudentList.size++;
		tempStudentList.sortStudent();
	}
	
	return input;
}

ostream &operator<<(ostream &output, const StudentList &tempStudentList)
{
	int i;
	for (i = 0; i < tempStudentList.getSize(); i++)
	{
		cout << "Student[" << i + 1 << "]:" << endl;
		output << tempStudentList.stdt[i];
	}
	cout << endl;
	return output;
}