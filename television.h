#pragma once
#include "item.h"

class television : public item
{
private:
	int screen_size;

public:
	television(double price, const std::string& model, const std::string& manufacturer, int screen_size);

	int get_screen_size() const;

	void print() const override;
};