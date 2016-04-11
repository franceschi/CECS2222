#include "Coin.h"

int main() {

	Coin myCoin;

	int numberOftoss;
	int randomNumber;
	string sideUp;
	int heads = 0, tails = 0;
	srand((time(0)));

		cout << "\nWelcome to the coin toss simulator program! \n";
		cout << "How many times would you like to toss the coin? ";
		cin >> numberOftoss;

		for (int index = 1; index <= numberOftoss; index++)
		{
			randomNumber = myCoin.toss();

			if (randomNumber == 1) {
				sideUp = "heads";
				heads++;
			}
			else {
				sideUp = "tails";
				tails++;
			}
			cout << "For the toss # " << (index) << " the side up is: " << sideUp << "!" << endl;
		}

		cout << "\nTotal number of flips: " << numberOftoss << endl;
		cout << "Total number of heads: " << heads << endl;
		cout << "Total number of tails: " << tails << endl;

		system("pause");
	return 0;
}