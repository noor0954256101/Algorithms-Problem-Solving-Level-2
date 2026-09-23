#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandomNumper(int Form, int To)
{

	int randNumper = rand() % (To - Form + 1) + Form;
	return randNumper;
	
}


int main()
{
	srand((unsigned)time(NULL));

	cout << RandomNumper(1, 10) << endl;
	cout << RandomNumper(1, 10) << endl;
	cout << RandomNumper(1, 10) << endl;
	return 0;
}