#include <iostream>
#include "item.h"

item::item(double price, const std::string& model, const std::string& manufacturer)
{
	set_price(price);

	if (model.empty())
	{
		throw std::exception("Model must have a name.");
	}
	this->model = model;

	if (manufacturer.empty())
	{
		throw std::exception("Manufacturer must have a name.");
	}
	this->manufacturer = manufacturer;
}

double item::get_price() const
{
	return price;
}

std::string item::get_model() const
{
	return model;
}

std::string item::get_manufacturer() const
{
	return manufacturer;
}

void item::set_price(double price)
{
	if (price < 0)
	{
		throw std::exception("Price cannot be negative.");
	}
	this->price = price;
}

void item::print() const
{
	
}