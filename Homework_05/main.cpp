//Complex Number Program
#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main() {
	ComplexNumbers number_01(15,69), number_02, number_03;
	cout << "Complex Number sum and multiplication using operators: " << endl;
	cout << "Number 01 = " << number_01 << endl;
	cout << "Number 02 = " << number_02 << endl;
	cout << "Enter a complex number in the following format (x, y): ";
	cin >> number_02;
	cout << endl;

	//cout << "Number 02 = " << number_02 << endl;
	number_03 = number_01 + number_02;

	cout << "Output for the calculation... " << endl;
	cout << number_01 << " + " << number_02 << " = " << number_01 + number_02 << endl;
	cout << number_01 << " * " << number_02 << " = " << number_01 * number_02 << endl;

}