#include <iostream>
#include <string>

using namespace std;

int ReadPosetevaNumpers(string Message)
{
	int num;
	do
	{
		cout << Message << endl;
		cin >> num;
		cout << endl;
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

void PrintArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl << endl;
}

bool CheckArryIndex(int LenghtofArry, int NumberToCheck, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		if (NumberToCheck == Arry[i])
		{
			return true;
		}
	}
	return false;
}

void PrintCheckArryIndex(int LenghtofArry, int NumberToCheck, int Arry[100])
{
	if (CheckArryIndex(LenghtofArry, NumberToCheck, Arry))
	{
		cout << "Yes,The Number is found:-)\n";
	}
	else
	{
		cout << "Yes,The Number is not found:-(\n";
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int LenghtofArry = ReadPosetevaNumpers("Enter the Arry Size : ");
	int Arry[100];

	ReadArry(LenghtofArry, Arry);

	cout << "\nArry 1 Elements is :\n";
	PrintArry(LenghtofArry, Arry);

	int NumberToCheck = ReadPosetevaNumpers("Enetr the Number to Search in Arry : ");
	cout << "Number You are Looking for is : " << NumberToCheck << endl;

	PrintCheckArryIndex(LenghtofArry, NumberToCheck, Arry);

	return 0;
}