#pragma once
#include <string>
#include "phone.h"
#include "email_receiver.h"
#include "text_receiver.h"

class smartphone : public phone, public email_receiver, public text_receiver
{
public:
	smartphone(const std::string& number);
	void receive_email(const std::string& sender, const std::string& subject) override;
	void receive_text(const std::string& message) override;
};