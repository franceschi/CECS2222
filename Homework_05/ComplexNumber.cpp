//
//  ComplexNumbers.cpp
//  
//
//  Created by Miguel Franceschi on 5/22/16.
//
//

#include "ComplexNumber.h"

ostream & operator<<(ostream & out, const ComplexNumbers & aComplexNumbers)
{
	//insert return statement here
	out << "C";
	out << aComplexNumbers.realPart;
	out << ",";
	out << aComplexNumbers.imaginaryPart;
	out << ")";
	return out;
}

istream & operator >> (istream & in, ComplexNumbers & aComplexNumbers)
{
	// TODO: insert return statement here
	char ch;
	in >> ch;
	in >> aComplexNumbers.realPart;
	in >> ch;
	in >> aComplexNumbers.imaginaryPart;
	in >> ch;
	return in;
}

ComplexNumbers::ComplexNumbers(double real, double imaginary)
{
	this->realPart = real;
	this->imaginaryPart = imaginary;
}

ComplexNumbers::~ComplexNumbers()
{
	//Just a destructor.
}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers & aComplexNumbers) const
{
	ComplexNumbers temp_value;
	temp_value.realPart = realPart + aComplexNumbers.realPart;
	temp_value.imaginaryPart = imaginaryPart + aComplexNumbers.imaginaryPart;
	return temp_value;
}

ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers & aComplexNumbers) const
{
	ComplexNumbers temp_value;
	temp_value.realPart = (realPart * aComplexNumbers.realPart) - (imaginaryPart * aComplexNumbers.imaginaryPart);
	temp_value.imaginaryPart = (realPart * aComplexNumbers.imaginaryPart) + (imaginaryPart * aComplexNumbers.realPart);
	return temp_value;
}

bool ComplexNumbers::operator==(const ComplexNumbers & aComplexNumbers) const
{
	return (realPart == aComplexNumbers.realPart && imaginaryPart == aComplexNumbers.imaginaryPart);
}

void ComplexNumbers::setComplex(const double& real, const double& imaginary)
{
	this->realPart = real;
	this->imaginaryPart = imaginary;
}

void ComplexNumbers::getComplex(double& real, double& imaginary) const
{
	real = realPart;
	imaginary = imaginaryPart;
}
 