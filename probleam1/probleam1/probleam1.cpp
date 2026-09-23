#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintTableHeader()
{
	cout << "\n\t\t\tMultiplication Table From 1 to 10\n\n";
	for (int i = 1; i <= 10; i++)
	{
		cout << "\t" << i;
	}
	cout << "\n---------------------------------------------------------------------------------------\n";
}

string Separator(int i)
{
	if (i < 10)
		return "   |";
	else
	{
		return "  |";
	}
}

void printMultiplicationTable1To10()
{
	PrintTableHeader();

	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << " " << Separator(i) << "\t";
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
	
}


int main()
{
	printMultiplicationTable1To10();
	return 0;
}