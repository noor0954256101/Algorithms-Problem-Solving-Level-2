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
	cout << endl<< endl;
}

void sumNumberOfArry(int LenghtofArry, int Arry1[100],int Arry2[100], int sumArrys[100])
{
	for (int i = 0; i < LenghtofArry; i++)
	{
		sumArrys[i] = Arry1[i] + Arry2[2];
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int LenghtofArrys = ReadPosetevaNumpers("Enter Size Of The Arry : ");

	int Arry1[100];	int Arry2[100];	int ArrySum[100];

	ReadArry(LenghtofArrys, Arry1);

	ReadArry(LenghtofArrys, Arry2);

	sumNumberOfArry(LenghtofArrys, Arry1, Arry2,ArrySum);

	cout << "\nThe Elemetn of Arry 1 is : \n";
	PrintArry(LenghtofArrys, Arry1);

	cout << "The Elemetn of Arry 2 is : \n";
	PrintArry(LenghtofArrys, Arry2);

	cout << "The Sum Of Arry 1 And Arry 2 is : \n";
	PrintArry(LenghtofArrys, ArrySum);

	
}