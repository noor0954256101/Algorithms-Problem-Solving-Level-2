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

int PrintFrequencyDigit(int Numper,int Num)
{
	int Reminder = 0;
	int i=0;
	while (Numper > 0)
	{
		Reminder = Numper % 10;
		Numper = Numper / 10;
		if (Reminder == Num)
		{
			i++;
		}
	}
	return i;
}

int main()
{
	int Numpers = ReadPosetevaNumpers("Enetr the Numpers : ");
	int Num = ReadPosetevaNumpers("Enetr the Numpers is frequency : ");
	cout << "the frequency of Numpers "<<Num <<" is : "
		<< PrintFrequencyDigit(Numpers, Num)
		<< endl;
	return 0;
}
