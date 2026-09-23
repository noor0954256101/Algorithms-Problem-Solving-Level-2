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
	} while (num <= 0);
	return num;
}

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

void ReadArry(int ArryLength, int Arry[100])
{
	for (int i = 0; i < ArryLength; i++)
	{
		Arry[i] = RandomNumper(1, 100);
	}
}

void PrintArry(int ArryLength, int Arry[100])
{
	for (int i = 0; i < ArryLength; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

int countNumperOfEven(int Arry[100], int ArryLength)
{
	int counter = 0;
	for (int i = 0; i < ArryLength; i++)
	{
		if (Arry[i] % 2 == 0)
		{
			counter++;
		}
	}
	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int Arry1[100];
	int ArryLength = ReadPosetevaNumpers("Enetr Size of Arry : ");

	ReadArry(ArryLength, Arry1);

	cout << "\nArry Element is : \n";
	PrintArry(ArryLength, Arry1);

	cout << "\nOdd Number Count is : " << countNumperOfEven(Arry1, ArryLength) << endl;
}