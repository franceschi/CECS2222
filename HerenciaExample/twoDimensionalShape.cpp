#include <iostream>
using namespace::std;
#include "twoDimensionalShape.h"


twoDimensionalShape::twoDimensionalShape(double tempArea, double tempCircumference):area(tempArea), circumference(tempCircumference)
{
}


twoDimensionalShape::~twoDimensionalShape()
{
	cout << "twoDimensional object destructor\n";
}

void twoDimensionalShape::setArea(double tempArea) {
	area = tempArea;
}

void twoDimensionalShape::setCircumference(double tempCircumference) {
	circumference = tempCircumference;
}

void twoDimensionalShape::printArea()
{
	cout << "Area:" << area << endl;
}

void twoDimensionalShape::printCircumference() {
	cout << "Perimeter:" << circumference << endl;
}





