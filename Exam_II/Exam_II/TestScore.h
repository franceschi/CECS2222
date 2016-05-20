#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <iostream>

using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{

	friend istream & operator >> (istream &input, StudentTestScores &tempTest);
	friend ostream & operator << (ostream &output,  StudentTestScores &tempTest);

private:
	
	double testScores[4];  
	int numTestScores;
	double grades;

public:

	StudentTestScores(int numScores, double testScores[])
	{
		numTestScores = numScores;
		for (int i = 0; i < numTestScores; i++)
			setTestScore(testScores[i], i);

	}

	StudentTestScores(const StudentTestScores &tempStudent)
	{
		numTestScores = tempStudent.numTestScores;
		for (int i = 0; i < numTestScores; i++)
			testScores[i] = tempStudent.testScores[i];
	}


	StudentTestScores()
	{
		numTestScores = 4;
		setTestScore(99.9 , 0);
		setTestScore(80.9 , 1);
		setTestScore(90.9 , 2);
		setTestScore(80.9 , 3);
	}


	~StudentTestScores()
	{
	}

	void setTestScore(double score, int index)
	{
		testScores[index] = score;
	}

	int getNumTestScores()
	{
		return numTestScores;
	}
	
	double getTestScore(int index) const
	{
		return testScores[index];
	}

	void setGrades(int, double) const
	{

	}

	// Overloaded = operator
	const StudentTestScores operator=(const StudentTestScores &tempTest)
	{
		numTestScores = tempTest.numTestScores;
		
		for (int i = 0; i < numTestScores; i++)
		this->testScores[i] = tempTest.testScores[i];
		return *this;
	}

	friend istream & operator >> (istream &input, StudentTestScores &tempTest)
	{
		cout << "Enter the number of tests taken: ";
		input >> tempTest.numTestScores;
		
		for (int i = 0; i < tempTest.getNumTestScores(); i++)
		{	
			cout << "Enter the score: ";
			input >> tempTest.testScores[i];
		}

		return input;
	}

	friend ostream & operator<<(ostream &output, StudentTestScores &tempTest)
	{
		cout << "\nThe number of tests taken: ";
		output << tempTest.numTestScores;
		cout << "\nThe scores are: ";
		for (int i = 0; i < tempTest.getNumTestScores(); i++)
		{
			output << tempTest.testScores[i] << " ";
			
		}
		return output;
	}

};
#endif