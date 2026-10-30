#pragma once
#include <string>
#include "device.h"
#include "call_receiver.h"

class phone : public device, public call_receiver
{
protected:
	std::string number;
public:
	phone(const std::string& number);
	std::string get_number() const;
	void receive_call(const std::string& caller_number) override;
};