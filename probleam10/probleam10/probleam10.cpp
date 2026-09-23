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

int ReversDigist(int Num)
{
	int Reminder = 0;
	int num2 = 0;
	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		num2 = num2 * 10 + Reminder;
	}
	return num2;
}

void printDigist(int Num)
{
	int Reminder = 0;
	while (Num > 0)
	{
		Reminder = Num % 10;
		Num = Num / 10;
		cout << Reminder << endl;
	}

}

int main()
{
	int num = ReadPosetevaNumpers("Enetr the Numpers : ");
	printDigist(ReversDigist(num));
	return 0;
}