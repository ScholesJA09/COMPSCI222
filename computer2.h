#pragma once
#include <string>
#include "device.h"
#include "email_receiver.h"

class computer2 : public device, public email_receiver
{
protected:
	std::string name;
public:
	computer2(const std::string& name);
	std::string get_name() const;
	void receive_email(const std::string& sender, const std::string& subject) override;
};