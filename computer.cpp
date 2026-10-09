#include <iostream>
#include "computer.h"

computer::computer(double price, const std::string& model, const std::string& manufacturer, int storage) : item(price, model, manufacturer)
{
	if (storage < 0)
	{
		throw std::exception("Storage must be positive.");
	}
	this->storage = storage;
}

int computer::get_storage() const
{
	return storage;
}

void computer::print() const
{
	std::cout << "The " << manufacturer << " " << model << " ($" << price << ")" << " has " << storage << " GB of storage" << std::endl;
}