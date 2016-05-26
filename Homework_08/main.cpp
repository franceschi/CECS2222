// This program demonstrates the the FeetInches class's
// conversion functions & prefix and post fix operators, overloaded.


#include <iostream>
#include "FeetInches.h"
using namespace std;

int main()
{
	double d;  
	int i;     

			   
	FeetInches distance;

	// Get a distance from the user.
	cout << "Enter a distance in feet and inches:\n";
	cin >> distance;

	// Convert the distance object to a double.
	d = distance;

	// Convert the distance object to an int.
	i = distance;


	//Display - and -- operators
	cout << "Displaying PREFIX - operator: \n";
	cout << "Value: " << --distance << endl;

	cout << "Displaying POSTFIX - operator: \n";
	cout << "Value: " << distance-- << endl;



	// Display the values.
	cout << "The value is" << distance;
	cout << " is equivalent to " << d << " feet\n";
	cout << "or " << i << " feet, rounded.\n";
	return 0;
}
