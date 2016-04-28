#pragma once
#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;
#include "twoDimensionalShape.h"


class Circle: public twoDimensionalShape
{
private:
	double radius;
	const double PI = 3.14159;
public:
	//Constructors & Destructors:
	Circle(double tempRadius = 0.0);
	Circle(Circle & tempCircle);
	~Circle();
	//Methods:
	void setRadius(double);
	double getRadius() const;
	void getArea();
	double getDiameter() const;
	void getCircumference();
	void print();
};
#endif
