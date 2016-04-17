#include<iostream> 
using namespace::std; 
#include "studentList.h" 

istream &operator>>(istream &input, studentList &tempStudentList)
{ 
	int i,n; 
	Student tempStudent; 
	cout<<"Entre el numero de estudiantes:"; 
	input>>n; 
	for(i=0;i<n; i++)
	{ 
		input>>tempStudent; 
		while(tempStudentList.searchStudent(tempStudent) && ( tempStudentList.size !=0) ) 
		{ 
			cout<<"Entre de nuevo el estudiante #["<<i+1<<"]:\n"; 
			input>>tempStudent; 
		} //end 
		tempStudentList.stdt[i] = tempStudent;
		tempStudentList.size++; 
		tempStudentList.sortStudent(); 
	}//end for return input; }//end function operator>>