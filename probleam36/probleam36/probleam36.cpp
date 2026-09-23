#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPosetevaNumpers(string Message)
{
	int num;
	do
	{
		cout << Message << endl;
		cin >> num;
		cout << endl;
	} while (num < 0);
	return num;
}

void PrintArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl << endl;
}

void AddArryElement(int Number, int& Length, int Arry[100])
{
	Arry[Length] = Number;
	Length++;
}

void  InputUserNumbersInArray(int Arry[100], int& Length)
{
	bool AddNumber;
	do
	{
		AddArryElement(ReadPosetevaNumpers("Enter the Number : "), Length, Arry);
		cout << "Do you want to add more numbers? [0]:No,[1]yes?" << endl;
		cin >> AddNumber;

	} while (AddNumber);
}

int main()
{
	int Arry[100]; int counter = 0;

	InputUserNumbersInArray(Arry, counter);

	cout << "Arry Length : " << counter<<endl;
	cout << "Arry Element is : ";
	PrintArry(counter, Arry);
}