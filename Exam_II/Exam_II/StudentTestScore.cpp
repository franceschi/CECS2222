#include "StudentTestScore.h"


TestScore::TestScore()
{
	studentID = "57014";
	numTestScore = DEFAULT_SCORE;
	createTestScoreArray(1);
}

TestScore::TestScore(MyString ID, int numScores)
{
	studentID = ID;
	createTestScoreArray(numScores);
}

TestScore::TestScore(const TestScore & tempTestScore)
{
	studentID = tempTestScore.studentID;
	numTestScore = tempTestScore.numTestScore;
	testScores = new double[numTestScore];
	for (int i = 0; i < numTestScore; i++)
		testScores[i] = tempTestScore.testScores[i];
}



TestScore::~TestScore()
{
	cout << "TestScore object destructor. " << endl;
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

void TestScore::setStudentID(MyString id)
{
	studentID = id;
}


MyString TestScore::getStudentID() const
{
	return studentID;
}

int TestScore::getNumTestScore() const
{
	return numTestScore;
}

double TestScore::getTestScore(int index) const
{
	return testScores[index];
}



TestScore & TestScore::operator =(const TestScore & tempTestScore)
{
	delete[] testScores;
	studentID = tempTestScore.studentID;
	numTestScore = tempTestScore.numTestScore;
	testScores = new double[numTestScore];
	for (int i = 0; i < numTestScore; i++)
		testScores[i] = tempTestScore.testScores[i];

	return (*this);
}

istream & operator >> (istream & in, TestScore & tempTestScore)
{
	cout << "Enter your student ID: " << endl;
	in >> tempTestScore.studentID;
	cout << "Enter the number of scores to register: " << endl;
	in >> tempTestScore.numTestScore;
	

	return in;
}

ostream & operator << (ostream & out, TestScore &tempTestScore)
{
	out << "(" << tempTestScore.getNumTestScore() << ")" << endl;
	
}

