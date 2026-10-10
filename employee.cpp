#include <iostream>
#include "employee.h"

employee::employee(const std::string& name, int age, int id) : person2(name, age)
{
	if (id < 1000 || id > 9999)
	{
		throw std::exception("ID must be between 1000 and 9999.");
	}
	this->id = id;
}

int employee::get_id() const
{
	return id;
}