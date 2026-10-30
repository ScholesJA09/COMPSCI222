#include <iostream>
#include <string>
#include "computer2.h"

computer2::computer2(const std::string& name) : name(name) {}

std::string computer2::get_name() const
{
	return name;
}

void computer2::receive_email(const std::string& sender, const std::string& subject)
{
	std::cout << "*chime* from: " << sender << " subject: " << subject << std::endl;
}