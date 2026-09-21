#include <iostream>
#include <iomanip>
#include "product.h"

product::product() : product("Unknown", 0, 0.0) {}

product::product(const std::string& name, double price, double rating)
{
	if (name.empty())
	{
		throw std::exception("Product name cannot be empty.");
	}
	this->name = name;

	set_price(price);
	set_rating(rating);
}

std::string product::get_name()
{
	return name;
}

double product::get_price()
{
	return price;
}

double product::get_rating()
{
	return rating;
}

void product::set_price(double price)
{
	if (price < 0)
	{
		throw std::exception("Price cannot be negative.");
	}
	this->price = price;
}

void product::set_rating(double rating)
{
	if (rating < 0 || rating > 5)
	{
		throw std::exception("Rating must be between 0 and 5.");
	}
	this->rating = rating;
}

void product::print()
{
	std::cout << name << " | $" << std::fixed << std::setprecision(2) << price << " | Rated " << std::fixed << std::setprecision(1) << rating << " / 5.0 stars" << std::endl;
}