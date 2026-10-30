#include <iostream>
#include <string>
#include "phone.h"

phone::phone(const std::string& number) :number(number) {}

std::string phone::get_number() const
{
	return number;
}

void phone::receive_call(const std::string& caller_number)
{
	std::cout << "*ring* " << number << " is receiving a call from " << caller_number << std::endl;
}