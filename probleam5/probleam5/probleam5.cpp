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
	printDigist( ReadPosetevaNumpers("Enetr the Numpers : "));

	return 0;
}