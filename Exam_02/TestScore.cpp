#include "TestScore.h"

template <class T>
TestScore<T>::TestScore()
{
    numTestScore = DEFAULT_SCORE;
    createTestScoreArray(1);
}

template <class T>
TestScore<T>::TestScore(MyString name, int numScores)
{
    studentName = name;
    createTestScoreArray(numScores);
}

template <class T>
TestScore<T>::TestScore(const TestScore & aTestScore)
{
    studentName = aTestScore.studentName;
    numTestScore = aTestScore.numTestScore;
    testScores = new T[numTestScore];
    for(int i = 0; i < numTestScore; i++)
        testScores[i] = aTestScore.testScores[i];
}


template <class T>
TestScore<T>::~TestScore()
{
    delete [] testScores;
}

template <class T>
void TestScore<T>::createTestScoreArray(int size)
{
    numTestScore = size;
    testScores = new double[size];
    for(int i = 0; i < size; i++)
        testScores[i] = DEFAULT_SCORE;
}

template <class T>
void TestScore<T>::setTestScore(double score, int index)
{
    testScores[index] = score;
}
template <class T>
void TestScore<T>::setStudentName(MyString name)
{
    studentName = name;
}

template <class T>
MyString TestScore<T>::getStudentName() const
{
    return studentName;
}
template <class T>
int TestScore<T>::getNumTestScore() const
{
    return numTestScore;
}

template <class T>
T TestScore<T>::getTestScore(int index) const
{
    return testScores[index];
}

template <class T>
T & TestScore<T>::operator[](int index)
{
    return testScores[index];
}

template <class T>
TestScore<T> & TestScore<T>::operator =(const TestScore & aTestScore)
{
    delete[] testScores;
    studentName = aTestScore.studentName;
    numTestScore = aTestScore.numTestScore;
    testScores = new double[numTestScore];
    for(int i = 0; i < numTestScore; i++)
        testScores[i] = aTestScore.testScores[i];

    return (*this);
}

istream & operator >> (istream & in, TestScore & tempTestScore)
{
	TestScore tempTestScore;

	temp.areaCode = new char[4];
	temp.exchange = new char[4];
	temp.line = new char[5];

	cout << "Enter Phone Number: " << endl;
	cout << "Enter 3 Digit area code: ";
	in >> temp.areaCode;

	cout << "Enter 3 digit exchange: ";
	in >> temp.exchange;

	cout << "Enter 4 digit line: ";
	in >> temp.line;

	tempPhone = temp;

	delete[]temp.areaCode;
	delete[]temp.exchange;
	delete[]temp.line;

	return in;
}

ostream & operator <<(ostream  & out, const StudentPhone & tempPhone)
{
	out << "(" << tempPhone.getAreaCode() << ")" << tempPhone.getExchange() << "-" << tempPhone.getLine();

	return out;
}