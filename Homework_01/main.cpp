#include "Circle.h"

int main() {
	Circle Circle_01, Circle_02(0.0), Circle_03(Circle_02);
	double radius;

	cout << "Welcome to the Circle program!\n";
	cout << "I will print the area, diameter and circumference of any circle. \n";
	cout << "\nEnter the radius: ";
	cin >> radius;
	
	//Storing data inside the objects created:
	Circle_01.setRadius(radius);
	Circle_01.print();

	//Displaying default object data:
	cout << "\nPrint of the empty circle values: ";
	Circle_02.print();

	//Copy by value:
	cout << "\nCopy by value of the empty circle: ";
	Circle_03.print();

	system("pause");
	return 0;
}