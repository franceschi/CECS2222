#pragma once

class twoDimensionalShape
{
private:
	double area, circumference;
public:
	twoDimensionalShape(double,double);
	~twoDimensionalShape();
	void setArea(double);
	void setCircumference(double);
	void printArea();
	void printCircumference();

};


