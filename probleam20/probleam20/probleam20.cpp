#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int RandomNumper(int From, int To)
{
	int RandomCh = rand() % (To - From + 1) + From;
	return RandomCh;
}

enum enCharType { SmallLetter=1, CapitalLetter =2, SpecialCharacte=3,Numpers=4};

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
		return char(RandomNumper(33,47));
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

int main()
{
	srand((unsigned)time(NULL));
	cout << GetRandomCharacter(SmallLetter)<< endl;
	cout << GetRandomCharacter(CapitalLetter) << endl;
	cout << GetRandomCharacter(SpecialCharacte) << endl;
	cout << GetRandomCharacter(Numpers) << endl;
	return 0;
}