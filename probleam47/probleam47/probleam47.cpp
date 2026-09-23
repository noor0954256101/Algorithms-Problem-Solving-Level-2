#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumpers(string Message)
{
	float num;
	cout << Message << endl;
	cin >> num;
	return num;
}

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

float MyRound(float Number)
{
	int IntPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;
	}
		
	else
	{
		return IntPart;
	}
}

int main()
{
	float Number = ReadNumpers("Enetr the Number : ");
	cout << "\nMy Round is : " << MyRound(Number) << endl;
	cout << "\nC++ Round is : " << round(Number) << endl;
	return 0;
}