#include <iostream>
#include "laptop.h"

laptop::laptop(double price, const std::string& model, const std::string& manufacturer, int storage, double battery_life) : computer(price, model, manufacturer, storage)
{
	if (battery_life <= 0)
	{
		throw std::exception("Battery life must be greater than 0");
	}
	this->battery_life = battery_life;
}

double laptop::get_battery_life() const
{
	return battery_life;
}

void laptop::print() const
{
	std::cout << "The " << manufacturer << " " << model << " laptop ($" << price << ") has " << storage << " GB of storage and " << battery_life << " hours of battery life" << std::endl;
}