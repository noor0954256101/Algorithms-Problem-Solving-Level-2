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

int ReversDigist(int numper)
{
	int Reminder = 0;
	int num2 = 0;
	while (numper > 0)
	{
		Reminder = numper % 10;
		numper = numper / 10;
		num2 = num2 * 10 + Reminder;
	}
	return num2;
}

bool IsPalindromeNumper(int Numpers)
{
	return Numpers == ReversDigist(Numpers);
}
int main()
{
	if (IsPalindromeNumper(ReadPosetevaNumpers("enetr the Numper: ")))
		cout << " Yes,it is a Palindrome Numpers " << endl;
	else
		cout << " No,it is Not a Palindrome Numpers " << endl;
}