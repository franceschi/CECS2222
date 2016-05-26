//
//  ComplexNumbers.h
//  
//
//  Created by Miguel Franceschi on 5/22/16.


#include <iostream>
using namespace std;

#ifndef ____ComplexNumbers__
#define ____ComplexNumbers__

class ComplexNumbers
{
	friend ostream& operator <<(ostream & out, const ComplexNumbers & aComplexNumbers);
	friend istream& operator >> (istream & in, ComplexNumbers & aComplexNumbers);
private:
	double realPart;
	double imaginaryPart;
public:
	ComplexNumbers(double realPart=0.00, double imaginaryPart=0.00);
	//ComplexNumbers(const ComplexNumbers & aComplexNumbers);
	~ComplexNumbers();

	ComplexNumbers operator+(const ComplexNumbers & aComplexNumbers) const;
	ComplexNumbers operator*(const ComplexNumbers & aComplexNumbers) const;

	bool operator ==(const ComplexNumbers & aComplexNumbers) const;

	void setComplex(const double&, const double&);
	void getComplex(double&,  double&) const;
};



#endif /* defined(____ComplexNumbers__) */

