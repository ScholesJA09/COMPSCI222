#pragma once
#include <string>

class text_receiver
{
public:
	virtual void receive_text(const std::string& message) = 0;
};