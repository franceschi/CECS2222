

#include <iostream> 
using namespace std;
class Sky
{
public:
	Sky()
	{
		cout << "Entering the sky.\n";
	}
	~Sky()
	{
		cout << "Leaving the sky.\n";
	}
};

class Ground : public Sky
{
public:
	Ground()
	{
		cout << "Entering the Ground.\n";
	}
	~Ground()
	{
		cout << "Leaving the Ground.\n";
	}


};

int main()
{
	Ground object;
	return 0;
}