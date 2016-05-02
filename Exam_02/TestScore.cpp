#include "TestScore.h"

TestScore::TestScore()
{
	numTestScore = DEFAULT_SCORE;
	createTestScoreArray(1);
}

TestScore::TestScore(MyString name, int numScores)
{
	studentName = name;
	createTestScoreArray(numScores);
}

TestScore::TestScore(const TestScore & aTestScore)
{
	studentName = aTestScore.studentName;
	numTestScore = aTestScore.numTestScore;
	testScores = new double[numTestScore];
	for (int i = 0; i < numTestScore; i++)
		testScores[i] = aTestScore.testScores[i];
}

TestScore::~TestScore()
{
	delete[] testScores;
}

void TestScore::createTestScoreArray(int size)
{
	numTestScore = size;
	testScores = new double[size];
	for (int i = 0; i < size; i++)
		testScores[i] = DEFAULT_SCORE;
}

void TestScore::setTestScore(double score, int index)
{
	testScores[index] = score;
}

void TestScore::setStudentName(MyString name)
{
	studentName = name;
}

MyString TestScore::getStudentName() const
{
	return studentName;
}

int TestScore::getNumTestScore() const
{
	return numTestScore;
}

double TestScore::getTestScore(int index) const
{
	return testScores[index];
}

TestScore & TestScore::operator =(const TestScore & aTestScore)
{
	delete[] testScores;
	studentName = aTestScore.studentName;
	numTestScore = aTestScore.numTestScore;
	testScores = new double[numTestScore];
	for (int i = 0; i < numTestScore; i++)
		testScores[i] = aTestScore.testScores[i];

	return (*this);
}
