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

float Mysqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumpers("Enetr the Number : ");
	cout << "\nMy sqrt is : " << Mysqrt(Number) << endl;
	cout << "\nC++ sqrt is : " << sqrt(Number) << endl;
	return 0;
}