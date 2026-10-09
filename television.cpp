#include <iostream>
#include "television.h"

television::television(double price, const std::string& model, const std::string& manufacturer, int screen_size) : item(price, model, manufacturer)
{
	if (screen_size < 0)
	{
		throw std::exception("Screen size must be positive.");
	}
	this->screen_size = screen_size;
}

int television::get_screen_size() const
{
	return screen_size;
}

void television::print() const
{
	std::cout << "The " << manufacturer << " " << model << " television ($" << price << ") is " << screen_size << "\"" << std::endl;
}