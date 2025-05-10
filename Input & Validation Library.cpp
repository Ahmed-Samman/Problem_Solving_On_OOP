#include<iostream>
#include"clsDate.h"
#include "clsInputValidate.h"
using namespace std;

int main()
{

	cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;
	cout << clsInputValidate::IsNumberBetween(1.5, 1.3, 10.8) << endl;
	cout << clsInputValidate::IsNumberBetween(1.32, 1.31, 10.82) << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(20, 3, 2025), clsDate(30, 3, 2025)) << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(30, 3, 2025), clsDate(20, 3, 2025)) << endl;


	cout << "\nPlease Enter a Integer Number: ";
	int i = clsInputValidate::ReadIntNumber("Invalid Number, Enter again: ");
	cout << "x= " << i << endl;

	cout << "\nPlease Enter a Integer Number Between 1 and 5: ";
	int y = clsInputValidate::ReadIntNumberBetween(1, 5, "Invalid Number, Enter again: ", "Number is not within range, enter again: ");
	cout << "y= " << y << endl;

	cout << "\nPlease Enter a Double Number: ";
	double d = clsInputValidate::ReadDblNumber("Invalid Number, Enter again: ");
	cout << "x= " << d << endl;

	cout << "\nPlease Enter a Double Number Between 1.2 and 5.8: ";
	double c = clsInputValidate::ReadDblNumberBetween(1.2, 5.8, "Invalid Number, Enter again: ", "Number is not within range, enter again: ");
	cout << "c= " << c << endl;

	cout << endl << clsInputValidate::IsValideDate(clsDate(35, 12, 2025)) << endl;




	//system("pause>0");
	return 0;
}