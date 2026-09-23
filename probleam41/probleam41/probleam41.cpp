#include <iostream>
#include <string>
using namespace std;

bool IsPalindromeNumper(int Arry[100],int ArryLength)
{
	for (int i = 0; i < ArryLength; i++)
	{
		if(Arry[i]!=Arry[ArryLength-i-1])
		{
			return false;
		}
	}
	return true;
}

void ReadArry(int Arry[100], int& ArryLength)
{
	ArryLength = 6;
	Arry[0] = 10;
	Arry[1] = 20;
	Arry[2] = 30;
	Arry[3] = 30;
	Arry[4] = 20;
	Arry[5] = 10;
}

void PrintArry(int Arry[100], int LengthOfArry)
{
	for (int i = 0; i < LengthOfArry; i++)
	{
		cout << Arry[i] << " ";
	}
	cout << endl;
}

int main()
{
	int Arry1[100]; int ArryLength;

	ReadArry(Arry1, ArryLength);

	cout << "Arry Element is : \n";
	PrintArry(Arry1, ArryLength);

	if (IsPalindromeNumper(Arry1,ArryLength))
		cout << "\nYes,it is A Arry Palindrome "<< endl;
	else
		cout << "\nNo,it is Not A Arry Palindrome  "<< endl;
}