#pragma once
#ifndef COINTOSSSIMULATOR_H
#define COINTOSSSIMULATOR_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Coin {
private:
	string sideUp = "";
public:
	Coin();
	~Coin();
	int toss(void);

};

#endif // !COINTOSSSIMULATOR_H