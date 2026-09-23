#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
	string Name;
	cout << "Enter the Name : \n";
	getline(cin, Name);
	return Name;
}

string convertEncryption(string Name, short EncryptionKey)
{
	for (int i = 0; i < Name.length(); i++)
	{
		Name[i] = char((int)Name[i] + EncryptionKey);
	}
	return Name;
}

string convertDecryption(string Encryption,short EncryptionKey)
{
	
	for (int i = 0; i < Encryption.length(); i++)
	{
		Encryption[i] = char((int)Encryption[i] - EncryptionKey);
	}
	return Encryption;
}

void start() {
	const short EncryptionKey = 2;

	string Name = ReadName();
	string AfterEncryption = convertEncryption(Name, EncryptionKey);
	string AfterDecryption = convertDecryption(AfterEncryption, EncryptionKey);

	cout << "Text Before Encryption : " << Name << endl;
	cout << "Text After Encryption : " << AfterEncryption << endl;
	cout << "Text After Decryption : " << AfterDecryption << endl;
}

int main()
{
	start();
	return 0;
}