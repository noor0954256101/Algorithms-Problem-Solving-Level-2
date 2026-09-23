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
	} while (num <= 0);
	return num;
}

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

void ReadArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
		Arry[i] = RandomNumper(0, 100);
}

void ReadArryReverse(int LenghtofArry, int Arry1[100],int Arry2[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		Arry2[LenghtofArry - 1-i] = Arry1[i];
	}
}

void PrintArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int LenghtofArry = ReadPosetevaNumpers("Enter the Arry Size : ");
	int Arry[100]; int Arry2[100];

	ReadArry(LenghtofArry, Arry);

	cout << "\nArry 1 Element : \n";
	PrintArry(LenghtofArry, Arry);

	ReadArryReverse(LenghtofArry, Arry, Arry2);

	cout << "Arry 2 Element Reverse : \n";
	PrintArry(LenghtofArry, Arry2);


	return 0;
}