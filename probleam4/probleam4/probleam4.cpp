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


bool isPerfectNumpers(int Num)
{
	int sum = 0;
	for (int i = 1; i < Num; i++)
	{
		if (Num % i == 0)
			sum += i;
	}
	return Num == sum;
}

void PrintPerfecNumpersForm1ToN(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (isPerfectNumpers(i))
			cout << endl << i << " The Numper is Perfect  \n";
	}
}

int main()
{
	PrintPerfecNumpersForm1ToN(ReadPosetevaNumpers("Enetr the Numpers is Perfect Or Not Perfect : "));
	return 0;
}