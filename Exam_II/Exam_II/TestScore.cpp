#include "TestScore.h"



TestScore::TestScore()
{
}


TestScore::~TestScore()
{
}

istream & operator >> (istream &input, StudentTestScores &tempTest)
{
	// 
	cout << "Enter the number of tests taken: ";
	input >> tempTest.numTestScores;
	cout << "Enter the scores: ";
	for (int i = 0; i < tempTest.getNumTestScores; i++)
	input >> tempTest.testScores[i];
}

ostream & operator<<(ostream &output, StudentTestScores &tempTest)
{
	cout << "The number of tests taken: ";
	output << tempTest.numTestScores;
	cout << "The scores are: ";
	for (int i = 0; i < tempTest.getNumTestScores; i++)
		output << tempTest.testScores[i];
}
