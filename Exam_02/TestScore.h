#include"MyString.h"

#ifndef TESTSCORE_H
#define TESTSCORE_H

const double DEFAULT_SCORE = 0.0;

template <class T>
class TestScore
{
    private:
        MyString studentName;
        T *testScores;
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
        T getTestScore(int) const;
        TestScore & operator =(const TestScore &);

        T & operator [](int);

};

#endif // TESTSCORE_H
