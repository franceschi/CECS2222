#include "Coin.h"

Coin::Coin()
{
	cout << "Initializing Constructor... \n";

}

Coin::~Coin() {
	cout << "\nDestroying Objects Created... \n";
}

int Coin::toss(void) {

	int randomNumber;
	randomNumber = 1 + rand() % 2;
	return randomNumber;
}
