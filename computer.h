#pragma once
#include "item.h"

class computer : public item
{
protected:
	int storage;

public:
	computer(double price, const std::string& model, const std::string& manufacturer, int storage);
	
	int get_storage() const;

	void print() const override;
};