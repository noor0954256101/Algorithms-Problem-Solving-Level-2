#include <iostream>
#include <string>
#include <cmath>
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

bool CalcoletSumTheNumperOfPerfektNumperOrNotPerfect( int Num)
{
	int sum = 0;
	for (int i = 1; i < Num; i++)
	{
		if (Num % i == 0)
			sum += i;
	}
	return Num==sum;
}

void PrintPerfecOrNotPerfect(int Num)
{
	if (CalcoletSumTheNumperOfPerfektNumperOrNotPerfect(Num))
		cout << endl << Num << " The Numper is Perfect : \n";
	else
		cout << endl << Num << " The Numper is Not Perfect : \n";
}


int main()
{
	//int Num = ReadPosetevaNumpers("Enetr the Numpers is Perfect Or Not Perfect : ");
	PrintPerfecOrNotPerfect(ReadPosetevaNumpers("Enetr the Numpers is Perfect Or Not Perfect : "));
	

	return 0;
}