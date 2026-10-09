#pragma once
#include <string>

class item
{
protected:
	double price;
	std::string model;
	std::string manufacturer;

	item(double price, const std::string& model, const std::string& manufacturer);

public:
	double get_price() const;
	std::string get_model() const;
	std::string get_manufacturer() const;

	void set_price(double price);

	virtual void print() const;
};