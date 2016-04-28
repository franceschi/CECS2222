// This program demonstrates a function template
// with two type parameters. //Ejemlo de multiples
#include <iostream>
using namespace std;

template <class T1, class T2>
int maximum(const T1 var1, T2 var2)
{
	if ((var1) > (var2))
		return (var1);
	else
		return (var2);
}

template <class T3, class T4>
int minimum(const T3 var3, T4 var4)
{
	if ((var3) < (var4))
		return (var3);
	else
		return (var4);
}

int main()
{
	int i;
	char c;
	float f;
	double d;

	cout << "Enter an int and a double, I will tell you which is the maximum: ";
	cin >> i >> d; 

	cout << "Comparing an int and a double, the largest\n"
		<< "of the two is " << maximum(i, d) << " .\n";

	//cout << "Comparing an char and a float, the largest\n"
		//<< "of the two is " << maximum(c, f) << " bytes.\n";

	cout << "Enter an int and a double, I will tell you which is the minimum: ";
	cin >> i >> d;

	cout << "Comparing an int and a double, the minimum\n"
		<< "of the two is " << minimum(i, d) << " .\n";

	//cout << "Comparing an char and a float, the minimum\n"
		//<< "of the two is " << maximum(c, f) << " bytes.\n";

	return 0;
}