#include <iostream>
#include "day.h"
#include "month.h"

void tell_it_like_it_is(day d) //enums are treated like ints
{
	if (d == day::monday)
	{
		std::cout << "Mondays are the worst." << std::endl;
	}

	else if (d == day::tuesday || d == day::wednesday || d == day::thursday)
	{
		std::cout << "Midweek days are alright." << std::endl;
	}

	else if (d == day::friday)
	{
		std::cout << "Fridays are great." << std::endl;
	}

	else
	{
		std::cout << "Weekends are the best." << std::endl;
	}
}

int main()
{
	day today = day::tuesday;
	tell_it_like_it_is(today);

	month m = month::november;
	int date = 3;

	std::cout << "Today is " << (int)m << " / " << date << std::endl;
	//Can't print out enums, must assign to int

	return 0;
}