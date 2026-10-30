#pragma once
#include <string>

class email_receiver
{
public:
	virtual void receive_email(const std::string& sender, const std::string& subject) = 0;
};