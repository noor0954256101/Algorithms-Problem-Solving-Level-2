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

int PrintFrequencyDigit(int Numper, int check)
{
	int Reminder = 0;
	int i = 0;
	while (Numper > 0)
	{
		Reminder = Numper % 10;
		Numper = Numper / 10;
		if (Reminder == check)
		{
			i++;
		}
	}
	return i;
}
void ForToTheCheck(int Num)
{
	for (int i = 0; i <= 9; i++)
	{
		short Digit = PrintFrequencyDigit(Num, i);
		if (Digit > 0)
			cout << " the Diget is " << i << " times " << Digit << endl;
	}
}


int main()
{
	int Numpers = ReadPosetevaNumpers("Enetr the Numpers : ");
	ForToTheCheck(Numpers);
}
