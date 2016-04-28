#include "Circle.h"


Circle::Circle(double tempRadius) :twoDimensionalShape(0.0,0.0),radius(tempRadius) {}

Circle::Circle(Circle & tempCircle):twoDimensionalShape(0.0,0.0) { setRadius(tempCircle.getRadius()); }

Circle::~Circle()
{
}

void Circle::setRadius(double tempRadius)
{
	radius = tempRadius;
}

double Circle::getRadius() const
{
	return radius;
}


void Circle::getArea()
{
	twoDimensionalShape::setArea(PI*getRadius()*getRadius());
}



double Circle::getDiameter() const
{
	return (getRadius() * 2);
}



void Circle::getCircumference()
{

	twoDimensionalShape::setCircumference(PI*getDiameter());
}

void Circle::print()
{
	cout << "\nRadius entered: " << getRadius() << endl;
	//cout << "Area: " << endl;
	getArea();
	twoDimensionalShape::printArea();
	//cout << "Diameter: " << getDiameter() << endl;
	cout << "Circumference: " << endl;
	getCircumference();
	twoDimensionalShape::printCircumference();
}
