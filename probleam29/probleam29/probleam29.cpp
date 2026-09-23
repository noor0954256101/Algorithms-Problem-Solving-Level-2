#include <iostream>
#include <string>
using namespace std;

enum enprimeORNotPrime{Prime=1,NotPrime=2};

enprimeORNotPrime CheckPrimeNumber(int NumperinArry)
{
	int M = round(NumperinArry / 2);
	for (int i = 2; i <= M; i++)
	{
		if (NumperinArry % i == 0)
		{
			return enprimeORNotPrime::NotPrime;
		}
	}
	return enprimeORNotPrime::Prime;
}

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

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

void ReadArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		Arry[i] = RandomNumper(0, 100);
	}
}

void PrintArry(int LenghtofArry, int Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

void CopyPrimeNumberinArry(int LenghtofArry, int Arry[100],int ArryPrime[100],int& LenghtofArryprime)
{
	int Counter = 0;
	for (int i = 0; i < LenghtofArry; i++)
	{
		if (CheckPrimeNumber(Arry[i])==enprimeORNotPrime::Prime)
		{
			ArryPrime[Counter] = Arry[i];
			Counter++;
		}
	}
	LenghtofArryprime = --Counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arry[100]; int LenghtofArry = ReadPosetevaNumpers("Enetr Size of Arry : ");

	ReadArry(LenghtofArry, Arry);

	int ArryPrime[100]; int LenghtofArryprime;

	CopyPrimeNumberinArry(LenghtofArry,Arry,ArryPrime, LenghtofArryprime);

	cout << "Number Of Arry Element is : \n";
	PrintArry(LenghtofArry, Arry);

	cout << "\nNumber Prime in Arry \n";
	PrintArry(LenghtofArryprime, ArryPrime);

	return 0;
}