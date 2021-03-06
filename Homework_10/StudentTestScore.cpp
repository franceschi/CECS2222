// This program demonstrates the overloaded = operator returning a value.
#include <iostream>
#include "StudentTestScores.h"
#include "MyString.h"

using namespace std;

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
	// Create a StudentTestScores object.
	StudentTestScores student1("Miguel Franceschi", 3);
	student1.setTestScore(100.0, 0);
	student1.setTestScore(95.0, 1);
	student1.setTestScore(81, 2);

	// Create two more StudentTestScores objects.
	StudentTestScores student2("Michael Cordoba", 3);
	student2.setTestScore(99.0, 0);
	student2.setTestScore(99.0, 1);
	student2.setTestScore(99.0, 2);

	StudentTestScores student3("Claudia Talavera", 3);
	student3.setTestScore(50.0, 0);
	student3.setTestScore(50.0, 1);
	student3.setTestScore(50.0, 2);

	// Assign student1 to student2 and student3.
	//student3 = student2 = student1;

	// Display the objects.
	displayStudent(student1);
	displayStudent(student2);
	displayStudent(student3);
	return 0;
}

// displayStudent function
void displayStudent(StudentTestScores s)
{
	cout << "Name: " << s.getStudentName() << endl;
	cout << "Test Scores: ";
	for (int i = 0; i < s.getNumTestScores(); i++)
		cout << s.getTestScore(i) << " ";
	cout << endl;
}