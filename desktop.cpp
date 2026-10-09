#include <iostream>
#include "desktop.h"

desktop::desktop(double price, const std::string& model, const std::string& manufacturer, int storage) : computer(price, model, manufacturer, storage)
{
}

void desktop::print() const
{
	std::cout << "The " << manufacturer << " " << model << " ($" << price << ")" << " has " << storage << " GB of storage" << std::endl;
}