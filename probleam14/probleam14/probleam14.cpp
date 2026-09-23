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

void printletar(int num)
{
	for (int i = num; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			char n = i + 64;
			cout << n;
		}
		cout << endl;
	}
}

int main()
{
	int Num = ReadPosetevaNumpers("Enter the numper : ");
	printletar(Num);
	return 0;
}