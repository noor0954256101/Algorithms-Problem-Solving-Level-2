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

void ReadArry(int LengthOfArry, int Arry[100])
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		Arry[i] = RandomNumper(1, 100);
	}
}

void PrintArry(int LengthOfArry, int Arry[100])
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

void AddArryElement(int Num, int& Length, int Arrycopy[100])
{
	Arrycopy[Length] =Num ;
	Length++;
}

void ReadArryCopy( int Arry[100], int Arrycopy[100],int& LengthArryCopy,int LengthOfArry)
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		AddArryElement(Arry[i], LengthArryCopy, Arrycopy);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Arry1[100];
	int LengthOfArry = ReadPosetevaNumpers("Enetr Size of Arry : ");

	ReadArry(LengthOfArry, Arry1);

	cout << "\nArry Element is : \n";
	PrintArry(LengthOfArry, Arry1);

	int Arry2[100]; int Length = 0;
	ReadArryCopy(Arry1, Arry2, Length, LengthOfArry);

	cout << "\nArry Copy Element is : \n";
	PrintArry(LengthOfArry, Arry2);
	return 0;
}