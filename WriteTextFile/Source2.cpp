#include<iostream>
#include<fstream>
#include<iomanip>

using namespace::std;
#include "StudentTestScores.h"
#include "String.h"


//Press ctrl+z to end
int main()
{
	ofstream dataFile;
	char data, fileName[30];

	cout << "Enter the name of the file: ";
	cin >> fileName;
	dataFile.open(fileName, ios::out);
	if (!dataFile) {
		cout << "Error" << fileName << " cannot be open\n";
	}
	else {
		while (cin.get(data)) {
			dataFile.put(data);
		}
		dataFile.close();
	}
	return 0;

}