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

void ReadArryElement(int NumperOfArry,int Arry[])
{
	cout << "Enetr Arry Element\n";
	for (int i = 1; i <= NumperOfArry; i++)
	{
		cout << "Element [" << i << "] :";
		cin >> Arry[i];
	}
}

void Check(int NumperOfCheckofArry, int NumperOfArry, int Arry[])
{
	int counter = 0;
	for (int i = 1; i <= NumperOfArry; i++)
	{
		if (NumperOfCheckofArry == Arry[i])
		{
			counter++;
		}
	}
	cout << NumperOfCheckofArry << " is a " << counter << " time(s)\n";
}

void printArry(int NumperOfArry, int Arry[])
{
	for (int i = 1; i <= NumperOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
}

int main()
{
	int NumperOfArry = ReadPosetevaNumpers("Enetr the Numpers : ");
	int*Arry=new int [NumperOfArry];
	ReadArryElement(NumperOfArry, Arry);
	cout << endl;
	int NumperOfCheck = ReadPosetevaNumpers("Enetr the Numpers You Wont to check : ");
	printArry(NumperOfArry, Arry);
	cout << endl<< endl;
	Check(NumperOfCheck, NumperOfArry, Arry);

	return 0;
}