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
		cout << endl;
	} while (num <= 0);
	return num;
}

int ReadArryElement(int NumperOfArry)
{
	int* Arry = new int[NumperOfArry];
	cout << "Enetr Arry Element\n";
	for (int i = 1; i <= NumperOfArry; i++)
	{
		cout << "Element [" << i <<"] :";
		cin >> Arry[i];
		return Arry[i];
	}	
}

void Check(int NumperOfCheckofArry,int NumperOfArry)
{
	int counter=0;
	for (int i = 1; i <= NumperOfArry; i++)
	{
		if (i == ReadArryElement(NumperOfArry))
		{
			counter++;
		}
	}
	cout << NumperOfCheckofArry << "is a " << counter << " time(s)\n";
}

void printArry(int NumperOfArry)
{
	for (int i = 0; i < NumperOfArry; i++)
	{
		cout << ReadArryElement(NumperOfArry) << " ";
	}
}



int main()
{
	int NumperOfArry = ReadPosetevaNumpers("Enetr the Numpers : ");
	cout << ReadArryElement(NumperOfArry) << endl;
	int NumperOfCheck = ReadPosetevaNumpers("Enetr the Numpers You Wont to check : ");
	



	return 0;
}