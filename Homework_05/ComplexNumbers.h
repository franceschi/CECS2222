//
//  ComplexNumbers.h
//  
//
//  Created by Miguel Franceschi on 5/22/16.
//
//

#ifndef ____ComplexNumbers__
#define ____ComplexNumbers__

class ComplexNumbers
{
private:
    double real;
    double img;
public:
    ComplexNumbers(double real = 0.0, double img 0.0);
    ComplexNumbers(const ComplexNumbers & aComplexNumbers);
    ~ComplexNumbers();
    
    
    ComplexNumbers operator + () const;
    ComplexNumbers operator - () const;
    ComplexNumbers & operator = (const ComplexNumbers & aComplexNumbers);
    ComplexNumbers operator + (const ComplexNumbers & aComplexNumbers) const;
    ComplexNumbers operator - (const ComplexNumbers & aComplexNumbers) const;
    
    bool operator ==(const ComplexNumbers & aComplexNumbers)const;
    bool operator !=(const ComplexNumbers & aComplexNumbers)const;
    bool operator >(const ComplexNumbers & aComplexNumbers)const;
    bool operator <(const ComplexNumbers & aComplexNumbers)const;
    
    
    void setRealNumber(int real);
    void setImaginaryNumber(int img);
    
    double getRealNumber() const;
    double getImaginaryNumber() const;
    
    friend ostream & operator <<(ostream & out, const ComplexNumbers & aComplexNumbers);
    friend istream & operator >>(istream & in, ComplexNumbers & aComplexNumbers);
    
    
    
};


#include <stdio.h>

#endif /* defined(____ComplexNumbers__) */
