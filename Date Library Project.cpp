#include<iostream>
#include "clsDate.h"
using namespace std;




int main()
{
	clsDate Date1;
	Date1.PrintDate();

	/*clsDate Date2("31/1/2022");
	Date2.PrintDate();*/

	clsDate Date3(20, 12, 2022);
	Date3.PrintDate();

	clsDate Date4(250, 2022);
	Date4.PrintDate();

	
	//cout << Date.NumbersToText(98443);

	//cout << Date.CalculateNumOfDayOrder() << endl;
	//cout << Date.DayName() << endl;

	//cout << Date.MonthName() << endl;;

	//Date.PrintMonthCalendar();

	//Date.PrintAllMonthesCalendarsOfYear();





	system("pause>0");
	return 0;
}