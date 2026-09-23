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

float MyFloor(float Number)
{
	int IntPart = int(Number);

	if (Number > 0)
		return IntPart;
	else
		return --IntPart;
}

int main()
{
	float Number = ReadNumpers("Enetr the Number : ");
	cout << "\nMy floor is : " << MyFloor(Number) << endl;
	cout << "\nC++ floor is : " << floor(Number) << endl;
	return 0;
}