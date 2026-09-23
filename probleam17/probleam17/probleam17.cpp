#include <iostream>
#include <string>
using namespace std;

string  Readpassword(string Message)
{
	string password;
	cout << Message << endl;
	cin >> password;
	return password;
}

void chakThepassword(string password)
{
	string word = "";
	int counter = 0;
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char k = 65; k <= 90; k++)
			{
				counter++;
				word = word + i;
				word = word + j;
				word = word + k;
				cout <<"Trial: [ "<<counter<<" ] " << word << endl;
				if (password == word)
				{
					cout << endl;
					cout << "password is :" << word << endl<< endl;
					cout << "the Found after is " << counter<< " Trial(s)\n\n";
					return;
				}
				word = "";
			}

		}

	}

}

int main()
{
	string Password = Readpassword("Enetr the password : ");
	chakThepassword(Password);
	return 0;
}