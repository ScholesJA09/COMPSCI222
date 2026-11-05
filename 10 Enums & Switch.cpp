#include <iostream>
#include <string>
#include "day.h"
#include "month.h"

void tell_it_like_it_is(day d) //enums are treated like ints
{
	switch (d) //Switch code based on d, only works for equality (==)
	{
	case day::monday: 
		std::cout << "Mondays are the worst." << std::endl;
		break; //stop operation of given case, Falling Out
	case day::friday:
		std::cout << "Fridays are great." << std::endl;
		break;
	case day::saturday: //Falling Through
	case day::sunday:
		std::cout << "Weekends are the best." << std::endl; //Prints out for both Sat. & Sun.
		break;
	default: //Remaining values of d (Midweek days)
		std::cout << "Midweek days are alright." << std::endl;
		break;
	}
}

std::string month_to_string_with_switch(month m) //Non-constant Time Operation depending on month
{
	switch (m)
	{
	case month::january: return "January"; //Return, dont need break;
	case month::february: return "February";
	case month::march: return "March";
	case month::april: return "April";
	case month::may: return "May";
	case month::june: return "June";
	case month::july: return "July";
	case month::august: return "August";
	case month::september: return "September";
	case month::october: return "October";
	case month::november: return "November";
	case month::december: return "December"; //Order of n
	default: throw std::exception("Unsupported month."); //Good idea to always include default
	}
}

std::string month_names[12]{
	"Junuary", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
};

std::string month_to_string_with_array(month m) //Constant Time Operation, Pay on Stack with month names
{
	return month_names[(int)m - 1]; //Order of 1
}

int main()
{
	day today = day::thursday;
	month m = month::november;
	int date = 5;

	tell_it_like_it_is(today);

	std::cout << "Today is " << (int)m << " / " << date << std::endl;
	//Can't print out enums, must assign to int

	std::cout << "Today is " << month_to_string_with_switch(m) << " " << date << std::endl;
	std::cout << "Today is " << month_to_string_with_array(m) << " " << date << std::endl;

	return 0;
}