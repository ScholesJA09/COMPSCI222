#include <iostream>
#include <string>
#include "smartphone.h"

smartphone::smartphone(const std::string& number) : phone(number) {}

void smartphone::receive_email(const std::string& sender, const std::string& subject)
{
	std::cout << "*ping* new email from " << sender << std::endl;
}

void smartphone::receive_text(const std::string& message)
{
	std::cout << "*ping* new text message" << std::endl;
}