#include"MyString.h"

#ifndef TESTSCORE_H
#define TESTSCORE_H

const double DEFAULT_SCORE = 0.0;


class TestScore
{
	friend istream & operator >> (istream &, TestScore &);
	friend ostream & operator <<(ostream &, const TestScore &);

    private:
        MyString studentName;
        double *testScores;
        int numTestScore;
        void createTestScoreArray(int size);

    public:
        TestScore();
        TestScore(MyString, int);
        TestScore(const TestScore &);
        ~TestScore();

        void setTestScore(double, int);
        void setStudentName(MyString);
        MyString getStudentName() const;
        int getNumTestScore() const;
        double getTestScore(int) const;
        TestScore & operator =(const TestScore &);
		//TestScore & operator[](int);
};

#endif // TESTSCORE_H
