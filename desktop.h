#pragma once
#include "computer.h"

class desktop : public computer
{

public:
	desktop(double price, const std::string& model, const std::string& manufacturer, int storage);

	void print() const override;
};