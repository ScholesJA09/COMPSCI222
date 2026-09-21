#pragma once
#include <string>

//Task 1/4
class product
{
	std::string name;
	double price;
	double rating;

public:
	product();
	product(const std::string& name, double price, double rating);

	std::string get_name();
	double get_price();
	double get_rating();

	void set_price(double price);
	void set_rating(double rating);

	void print();
};