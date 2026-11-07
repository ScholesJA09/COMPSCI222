#include <iostream>
#include <string>
#include "Order.h"

order::order(int id, double price, status s, type t)
{
	set_id(id);
	set_price(price);
	set_status(status::new_);
	set_type(t);
}

int order::get_id() const
{
	return id;
}

double order::get_price() const
{
	return price;
}

status order::get_status() const
{
	return s;
}

type order::get_type() const
{
	return t;
}

void order::set_id(int id)
{
	this->id = id;
}

void order::set_price(double price)
{
	this->price = price;
}

void order::set_status(status s)
{
	this->s = s;
}

void order::set_type(type t)
{
	this->t = t;
}

void order::print() const
{
	switch (s)
	{
	case status::new_:
		std::cout << "New " << type_to_string(t) <<  " Order #" << id << " received" << std::endl;
		break;
	case status::preparing:
		std::cout << type_to_string(t) << " Order #" << id << " is being prepared" << std::endl;
		break;
	case status::ready:
		switch (t)
		{
		case type::dine_in:
			std::cout << "Order #" << id << " is ready to be served" << std::endl;
			break;
		case type::take_out:
			std::cout << "Order #" << id << " is ready for pickup" << std::endl;
			break;
		case type::delivery:
			std::cout << "Order #" << id << " is ready to be delivered" << std::endl;
			break;
		default:
			std::cout << "Order #" << id << " has unsupported type " << type_to_string(t) << std::endl;
		}
		break;
	case status::completed:
		std::cout << type_to_string(t) << " Order #" << id << " completed - customer paid $" << price << std::endl;
		break;
	case status::cancelled:
		std::cout << type_to_string(t) << " Order #" << id << " cancelled" << std::endl;
		break;
	default:
		std::cout << type_to_string(t) << " Order #" << id << " has unsupported status " << status_to_string(s) << std::endl;
	}
}