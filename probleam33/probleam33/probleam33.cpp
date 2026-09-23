#include <iostream>
#include <string>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacte = 3, Numpers = 4 };

int  ReadPosetevaNumpers(string Message)
{
	int num;
	do
	{
		cout << Message << endl;
		cin >> num;
		cout << endl;
	} while (num <= 0);
	return num;
}

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case enCharType::SmallLetter:
	{
		return char(RandomNumper(97, 122));
		break;
	}
	case enCharType::CapitalLetter:
	{
		return char(RandomNumper(65, 90));
		break;
	}
	case enCharType::SpecialCharacte:
	{
		return char(RandomNumper(33, 47));
		break;
	}
	case enCharType::Numpers:
	{
		return char(RandomNumper(48, 57));
		break;
	}

	return '\0';
	}
}

string  generatWord(enCharType CharType, short Length)
{
	string word = "";
	for (int i = 0; i < Length; i++)
	{
		word += GetRandomCharacter(CharType);
	}
	return word;
}

string generatKey()
{
	string key = "";
	key = generatWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generatWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generatWord(enCharType::CapitalLetter, 4) + "-";
	key = key + generatWord(enCharType::CapitalLetter, 4);
	return key;
}

void ReadArry(int LenghtofArry, string Arry[100])
{
	for (int i = 0; i < LenghtofArry; i++)
		Arry[i] = generatKey();
}

void PrintArry(int LenghtofArry, string Arry[100])
{
	cout << "Arry Keys : \n";
	for (int i = 0; i < LenghtofArry; i++)
	{
		cout << "Arry[" << i+1 << "] : " << Arry[i] << "\n";
	}
	cout << endl << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	string Arry[100]; int LenghtofArry = ReadPosetevaNumpers("Enter the Size Of Arry");

	ReadArry(LenghtofArry, Arry);
	PrintArry(LenghtofArry, Arry);

	return 0;
}