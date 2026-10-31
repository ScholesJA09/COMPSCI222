#include <iostream>
#include <string>
#include "person3.h"

person3::person3(const std::string& first, const std::string& last, int id)
{
	set_first(first);
	set_last(last);
	set_id(id);
}

std::string person3::get_first() const
{
	return first;
}

std::string person3::get_last() const
{
	return last;
}

int person3::get_id() const
{
	return id;
}

void person3::set_first(const std::string& first)
{
	if (first.empty())
	{
		throw std::exception("First name cannot be empty.");
	}
	this->first = first;
}

void person3::set_last(const std::string& last)
{
	if (last.empty())
	{
		throw std::exception("Last name cannot be empty.");
	}
	this->last = last;
}

void person3::set_id(int id)
{
	if (id < 1000000 || id > 9999999)
	{
		throw std::exception("ID must be between 1000000-9999999.");
	}
	this->id = id;
}