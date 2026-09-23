#include <iostream>
#include <string>
using namespace std;

void ReadArry(int Arry[100],int& ArryLength)
{
	ArryLength = 13;
	Arry[0] = 10;
	Arry[1] = 10;
	Arry[2] = 10;
	Arry[3] = 50;
	Arry[4] = 50;
	Arry[5] = 70;
	Arry[6] = 70;
	Arry[7] = 70;
	Arry[8] = 70;
	Arry[9] = 90;
	Arry[10] = 70;
	Arry[11] = 90;
	Arry[12] = 10;
}

void PrintArry(int Arry[100], int LengthOfArry)
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

void AddArryElement(int Num, int& Length, int Arrycopy[100])
{
	Arrycopy[Length] = Num;
	Length++;
}

int CheckNumberinArry(int Arry[100], int CheckNumber, int ArryLenght)
{
	for (int i = 0; i < ArryLenght; i++)
	{
		if(Arry[i]==CheckNumber)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int Arry[100], int CheckNumber, int ArryLenght)
{
	return CheckNumberinArry(Arry, CheckNumber, ArryLenght) != -1;
}

void CopyDistinctNumbersToArray(int Arry[100], int Arrycopy[100], int& LengthArryCopy, int LengthOfArry)
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		if (!IsNumberInArray(Arrycopy,Arry[i], LengthArryCopy))
		{
			AddArryElement(Arry[i], LengthArryCopy, Arrycopy);
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Arry1[100]; int ArryLength;

	ReadArry(Arry1, ArryLength);

	cout << "\nArry Element is : \n";
	PrintArry(Arry1, ArryLength);

	int Arry2[100]; int ArryLength2 = 0;
	CopyDistinctNumbersToArray(Arry1, Arry2, ArryLength2, ArryLength);

	cout << "\nArry Copy Element is : \n";
	PrintArry(Arry2, ArryLength2);
	return 0;
}