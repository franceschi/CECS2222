#pragma once

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

