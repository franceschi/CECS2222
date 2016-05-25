//
//  ComplexNumbers.cpp
//  
//
//  Created by Miguel Franceschi on 5/22/16.
//
//

#include "ComplexNumbers.h"



ComplexNumbers::ComplexNumbers(double real, double img)
{
    this->real=real;
    this->img=img;
}

ComplexNumbers::ComplexNumbers(const ComplexNumbers & aComplexNumbers)
{
    this->real = aComplexNumbers.real;
    this->img= aComplexNumbers.img;
}

ComplexNumbers::~ComplexNumbers()
{
    //Destructor
}

ComplexNumbers ComplexNumbers::operator=(const ComplexNumbers &  aComplexNumbers)
{
    double result_real = real + aComplexNumbers.real;
    double result_imaginary = img + aComplexNumbers.img;
    return ComplexNumbers( result_real, result_imaginary );
}

ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers &  aComplexNumbers)
{
    double result_real = real + aComplexNumbers.real;
    double result_imaginary = img + aComplexNumbers.img;
    return ComplexNumbers( result_real, result_imaginary );
}

ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers &  aComplexNumbers)
{
    double result_real = real - aComplexNumbers.real;
    double result_imaginary = img - aComplexNumbers.img;
    return ComplexNumbers( result_real, result_imaginary );
}

