#include<iostream>

using namespace std;

#ifndef STUDENTDATE_H
#define STUDENTDATE_H

class StudentDate
{
    friend istream & operator >>(istream &, StudentDate &);
    friend ostream & operator <<(ostream &, const StudentDate &);

    private:
        int month, day, year;
        int checkDay(int) const;
        int checkMonth(int) const;

    public:
        StudentDate();
        StudentDate(int, int, int);
        StudentDate(const StudentDate &);
        ~StudentDate();

        void setValues(int,int,int);
        void setMonth(int);
        void setDay(int);
        void setYear(int);

        int getMonth() const;
        int getDay() const;
        int getYear() const;

        StudentDate & operator =(const StudentDate &);

};

#endif // STUDENTDATE_H
