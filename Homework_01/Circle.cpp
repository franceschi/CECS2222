using namespace std;
#include "Circle.h"


Circle::Circle() {

	cout << "\nInitializing constructor...\n";
}

Circle::Circle(double tempRadius):radius(tempRadius) {}

Circle::Circle(Circle & tempCircle) { setRadius(tempCircle.getRadius()); }

Circle::~Circle()
{
	cout << "\nDestroying all objects created...\n";
}


void Circle::setRadius(double tempRadius)
{
	radius = tempRadius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getArea() const
{
	return (PI*getRadius()*getRadius());
}

double Circle::getDiameter() const
{
	return (getRadius()*2);
}

double Circle::getCircumference() const
{
	return (PI*getDiameter());
}

void Circle::print() const
{
	cout << "Radius: " << getRadius() << endl;
	cout << "Area: " << getArea() << endl;
	cout << "Diameter: " << getDiameter() << endl;
	cout << "Circumference: " << getCircumference() << endl;
}
