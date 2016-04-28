// This program uses a function template and the function will accept an int argument and return half of its value as a double.
#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for square function.
template <class T>
T half(T number)
{
	return number /2.0;
}

int main()
{
	int userInt;        // To hold integer input
	double userDouble;  // To hold double input

	cout << setprecision(5);
	cout << "Enter an integer and a double value: ";
	cin >> userInt >> userDouble;
	cout << "Here is the result: ";
	cout << half(userInt) << " and "
		<< half(userDouble) << endl;
	return 0;
}