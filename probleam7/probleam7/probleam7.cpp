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

int PrintSumDigit(int Numper)
{

	int Reminder = 0;
	int Numper2 = 0;

	while (Numper > 0)
	{
		Reminder = Numper % 10;//طلعت اخر رقم بالرقم المدخل
		Numper = Numper / 10;//خذفت اخر رقم من اجل العملية ثانية
		Numper2 = Numper2 * 10 + Reminder;//ضربت ب10 وضفت الرقم يلي اخرجته
		
	}
	return Numper2;
}

int main()
{
	int Numpers = ReadPosetevaNumpers("Enetr the Numpers : ");
	cout << "the Revers of Numpers is : "
		<< PrintSumDigit(Numpers)
		<< endl;
	return 0;
}
