#include <iostream>
#include <string>
using namespace std;

void printletarforAAAtoZZZ()
{
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char k = 65; k <= 90; k++)
			{
				cout << i << j << k << endl;
			}

		}

	}

}

int main()
{
	printletarforAAAtoZZZ();
	return 0;
}