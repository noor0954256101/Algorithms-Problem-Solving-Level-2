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

int PrintSumDigit(int Numper)
{
	int Reminder = 0;
	int sum = 0;
	while (Numper > 0)
	{
		Reminder = Numper % 10;
		Numper = Numper / 10;
		sum += Reminder;
	}
	return sum;
}

int main()
{
	int Numpers = ReadPosetevaNumpers("Enetr the Numpers : ");
	cout << "the Sum of The Numpers is : " 
		<<PrintSumDigit(Numpers)
		<< endl;
	return 0;
}