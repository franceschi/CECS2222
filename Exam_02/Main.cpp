//Student Program

#include "StudentPhone.h"
#include "StudentDate.h"
#include "StudentList.h"
#include "Student.h"
#include "MyString.h"
#include "TestScore.h"
#include <fstream>
#include <iostream>
using namespace std;

Student student_00, new_student;
StudentPhone phone;
StudentDate date;
StudentList student_01, student_02;
TestScore student_grades;


int main()
{
	fstream dataFile;		//File stream object
	const int SIZE = 255;	//Array Size
	char filename[SIZE];	//To hold a file name.

	cout << "Student Program" << endl;
	cout << "Enter the name of the file that you wish to write to: ";
	cin.getline(filename, SIZE);
	

	char id[25];
	int index;

	cin >> student_01;
	cout << "Enter the student index: ";
	cin >> index;
	cout << "Actual Student [" << index << "]:" << endl;
	cout << student_01[index] << endl;

	cout << "Enter the new student:";
	cin >> new_student;

	student_01[index] = new_student;
	cout << student_01;

	new_student = student_01[0];
	cout << new_student;


	return 0;
}


