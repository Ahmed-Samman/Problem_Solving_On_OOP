#include<iostream>
using namespace std;

#include "clsUtil.h"
#include"clsDate.h"


int main()
{
	clsUtil::Srand();
	cout << "Random Number: " << clsUtil::RandomNumber(1, 10) << endl;
	cout << "Get Random Character: " << clsUtil::GetRandomCharacter(clsUtil::MixChars) << endl;
	cout << "Generate Word: " << clsUtil::GenerateWord(clsUtil::MixChars, 8) << endl;
	cout << "Generate Key: " << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
	clsUtil::GenerateKeys(10, clsUtil::MixChars);

	cout << "\n\n";

	// Swap Int
	int x = 10, y = 20;
	cout << x << " - " << y << endl;
	clsUtil::Swap(x, y);
	cout << x << " - " << y << endl;

	cout << endl;

	// Swap double
	double a = 10.5, b = 20.3;
	cout << a << " - " << b << endl;
	clsUtil::Swap(a, b);
	cout << a << " - " << b << endl;

	cout << endl;

	// Swap String
	string S1 = "Ali", S2 = "Ahmed";
	cout << S1 << " - " << S2 << endl;
	clsUtil::Swap(S1, S2);
	cout << S1 << " - " << S2 << endl;

	cout << endl;

	// Swap Dates
	clsDate d1(1, 10, 2025), d2(1, 1, 2025);
	cout << d1.DateToString() << " - " << d2.DateToString() << endl;
	clsUtil::Swap(d1, d2);
	cout << d1.DateToString() << " - " << d2.DateToString() << endl;


	//Int Array
	int Arr1[5] = { 1,2,3,4,5 };
	clsUtil::ShuffleArray(Arr1, 5);
	cout << "\nArray1 after shuffle:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr1[i] << endl;
	}

	
	//string Array
	string Arr2[5] = {"Ahmed", "Samar", "Islam", "Rehab", "Eman"};
	clsUtil::ShuffleArray(Arr2, 5);
	cout << "\nArray2 after shuffle:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr2[i] << endl;
	}


	int Arr3[5];
	clsUtil::FillArrayWithRandomNumber(Arr3, 5, 20, 50);
	cout << "\nArray3 after Fill:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr3[i] << endl;
	}


	string Arr4[5];
	clsUtil::FillArrayWithRandomWords(Arr4, 5, clsUtil::MixChars, 8);
	cout << "\nArray4 after Fill:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr4[i] << endl;
	}


	string Arr5[5];
	clsUtil::FillArrayWithRandomKeys(Arr5, 5, clsUtil::MixChars);
	cout << "\nArray5 after Filling Keys:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Arr5[i] << endl;
	}


	cout << "\nText1 " << clsUtil::Tabs(5) <<"Text2\n";


	const short EncryptionKey = 2; // This is the key.
	string TextAfterEncryption, TextAfterDecryption;
	string Text = "Ahmed Samman";
	TextAfterEncryption = clsUtil::Encrypt_Text(EncryptionKey, Text);
	TextAfterDecryption = clsUtil::Decryption_Text(EncryptionKey, TextAfterEncryption);

	cout << "\nText Befor Encryption : ";
	cout << Text << endl;

	cout << "\nText After Encryption : ";
	cout << TextAfterEncryption << endl;

	cout << "\nText After Decryption : ";
	cout << TextAfterDecryption << endl;



	//system("pause>0");
	return 0;
}