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

float MyAbs(int Number)
{
	if (Number < 0)
		return Number * -1;
	else
	{
		return Number;
	}
}

int main()
{
	float Number = ReadNumpers("Enetr the Number : ");
	cout << "\nMy Abs is : " << MyAbs(Number)<< endl;
	cout << "\nC++ Abs is : " << abs(Number) << endl;
	return 0;
}