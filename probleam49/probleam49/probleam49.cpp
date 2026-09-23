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

float Myceil(float Number)
{
	if (abs(GetFractionPart(Number) < 0))
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
	{
		return Number;
	}
}

int main()
{
	float Number = ReadNumpers("Enetr the Number : ");
	cout << "\nMy ceil is : " << Myceil(Number) << endl;
	cout << "\nC++ ceil is : " << ceil(Number) << endl;
	return 0;
}