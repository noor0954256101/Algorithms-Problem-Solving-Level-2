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
	cout << "\nArry Element is : ";
	for (int i = 0; i < NumperOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

int MinNumberOfArry(int NumperOfArry, int Arry[100])
{
	int Min = Arry[0];
	for (int i = 1; i < NumperOfArry; i++)
	{
		if (Arry[i] < Min)
		{
			Min = Arry[i];
		}
	}
	return Min;
}

int main()
{
	srand((unsigned)time(NULL));
	int Arry[100];
	int NumperOfArry = ReadPosetevaNumpers("Enetr Size of Arry : ");
	ReadArry(NumperOfArry, Arry);
	PrintArry(NumperOfArry, Arry);
	cout << "the Min is Number of Arry is : " << MinNumberOfArry(NumperOfArry, Arry) << endl;
	return 0;
}