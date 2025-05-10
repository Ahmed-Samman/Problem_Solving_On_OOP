#pragma once
#include<iostream>
#include"clsDate.h"
using namespace std;


class clsPeriod
{

public:
	clsDate StartDate;
	clsDate EndDate;

	clsPeriod(clsDate StartDate, clsDate EndDate)
	{
		this->StartDate = StartDate;
		this->EndDate = EndDate;
	}


	static bool IsOverlapPeriod(clsPeriod Period1, clsPeriod Period2)
	{

		return clsDate::CompareDate1AndDate2(Period2.EndDate, Period1.StartDate) == clsDate::enCompareDate::After
			&& clsDate::CompareDate1AndDate2(Period2.StartDate, Period1.EndDate) == clsDate::enCompareDate::Before;
	}
	bool IsDateWithinPeriod(clsPeriod Period2)
	{
		return IsOverlapPeriod(*this, Period2);
	}
	void Print()
	{
		cout << "Period Start: ";
		StartDate.PrintDate();

		cout << "Period End: ";
		EndDate.PrintDate();

	}
	



};

