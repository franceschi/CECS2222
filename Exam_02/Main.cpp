#include "StudentPhone.h"
#include "StudentDate.h"
#include "StudentList.h"
//#include "Student.h"
//#include "MyString.h"
//#include "TestScore.h"
//#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	//const int SIZE = 255; //Array Size
	//char filename[SIZE];  //To hold a file name.
	//ifstream inputFile;	//File stream object

	StudentPhone phone;
	StudentDate date;

	//Get the name of the file
	//cout << "Enter the name of the file: ";
	//cin.getline(filename, SIZE);

	StudentList student_01, student_02;
	char id[25];
	int index;

	Student new_student;

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


