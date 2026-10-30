#pragma once
#include <string>

class call_receiver
{
public:
	virtual void receive_call(const std::string& caller_number) = 0;
};