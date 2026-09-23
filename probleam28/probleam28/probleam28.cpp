#include <iostream>
#include <string>
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

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

void ReadArry(int NumperOfArry, int Arry[100])
{
	for (int i = 0; i < NumperOfArry; i++)
	{
		Arry[i] = RandomNumper(1, 100);
	}
}

void PrintArry(int NumperOfArry, int Arry[100])
{
	cout << "\nArry Element is : \n";
	for (int i = 0; i < NumperOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

void ReadArryCopy(int NumperOfArry, int Arry[100], int Arrycopy[100])
{
	for (int i = 0; i < NumperOfArry; i++)
	{
		Arrycopy[i] = Arry[i];
	}
}

void PrintArryCopy(int NumperOfArry, int Arrycopy[100])
{
	cout << "\nArry Copy Element is : \n";
	for (int i = 0; i < NumperOfArry; i++)
	{
		cout << Arrycopy[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	int Arry[100];
	int Arrycopy[100];
	int NumperOfArry = ReadPosetevaNumpers("Enetr Size of Arry : ");
	ReadArry(NumperOfArry, Arry);
	PrintArry(NumperOfArry, Arry);
	ReadArryCopy(NumperOfArry, Arry, Arrycopy);
	PrintArryCopy(NumperOfArry, Arrycopy);
	return 0;
}