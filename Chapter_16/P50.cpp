// This program uses a function template and the function will accept an int argument and return half of its value as a double.
#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for square function.
template <class T>
T sum(T x, T y)
{
	return x + y;
}

int main()
{
	int x;        // To hold integer input
	int y;  // To hold double input

	cout << setprecision(5);
	cout << "Enter an integer and a double value: ";
	cin >> x >> y;
	cout << "Here is the result: ";
	cout << sum(x, y) << endl;
	return 0;
}