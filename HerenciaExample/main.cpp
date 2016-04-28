#include "Circle.h"
#include "twoDimensionalShape.h"

int main() {
	Circle Circle_01, Circle_02(0.0);
	double radius;

	cout << "Welcome to the Circle program!\n";
	cout << "I calculate area, diameter and circumference of any circle.\n";
	cout << "\nEnter the radius: ";
	cin >> radius;

	//Storing data inside the objects created:
	Circle_01.setRadius(radius);
	Circle_01.print();


	return 0;
}