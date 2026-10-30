#pragma once
#include <string>
#include "device.h"
#include "text_receiver.h"

class pager : public device, public text_receiver
{
protected:
	int id;
public:
	pager(int id);
	int get_id() const;
	void receive_text(const std::string& message) override;
};