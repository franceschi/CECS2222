#include<iostream>
#include<fstream>
using namespace::std;

int main()
{
	ofstream dataFile;
	char name[30];

	dataFile.open("ReadMe.txt");
		cout << "Enter your name: ";
	cin.getline(name, 30, '\n');
	dataFile << name << endl;
	dataFile.close();

	return 0;

}