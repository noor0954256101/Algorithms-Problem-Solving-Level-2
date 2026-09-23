#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enPrimeNotPrime { Prime = 1, notPrime = 2 };

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

enPrimeNotPrime PrimeOrNotPrime(int Num)
{
	int M = round(Num / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return enPrimeNotPrime::notPrime;
	}
	return enPrimeNotPrime::Prime;

}

void printPrimeNumper1ToN(int Num)
{
	cout << "The Prime Numper From 1 To " << Num << " is :" << endl;
	for (int i = 1; i <= Num; i++)
	{
		if (PrimeOrNotPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	printPrimeNumper1ToN(ReadPosetevaNumpers("Enetr the Numpers Please : "));
	return 0;
}