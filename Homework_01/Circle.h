#pragma once
#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H

const double PI = 3.1415;

class Circle
{
private:
	double radius;
public:
	Circle();
	Circle(double tempRadius = 1);
	Circle(Circle & tempCircle);
	~Circle();

	void setCircle(double raius);
	void setRadius(double);
	double getRadius() const;
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	void print() const;
};
#endif
