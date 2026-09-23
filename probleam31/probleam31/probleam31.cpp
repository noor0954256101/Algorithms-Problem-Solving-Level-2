#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int  ReadPosetevaNumpers(string Message)
{
	int num;
	do
	{
		cout << Message << endl;
		cin >> num;
	} while (num <= 0);
	return num;
}

void Swap(int& Num1, int& Num2)
{
	int swap = Num1;
	Num1 = Num2;
	Num2 = swap;

}

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

void ReadArryBeforeShuffle(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		Arry[i] = i + 1;
	}
}

void ReadArryAfterShuffle(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		Swap(Arry[RandomNumper(0, LenghtofArry - 1)], Arry[RandomNumper(0, LenghtofArry - 1)]);
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
	int Arry[100];

	ReadArryBeforeShuffle(LenghtofArry, Arry);

	cout << "\nArry Element Before Shuffle : \n";
	PrintArry(LenghtofArry, Arry);

	ReadArryAfterShuffle(LenghtofArry, Arry);

	cout << "Arry Element After Shuffle : \n";
	PrintArry(LenghtofArry, Arry);


	return 0;
}