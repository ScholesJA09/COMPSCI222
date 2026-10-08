#include <iostream>
#include "animal.h"

animal::animal(const std::string& name, int age)
{
	set_name(name);
	set_age(age);
}

std::string animal::get_name() const
{
	return name;
}

int animal::get_age() const
{
	return age;
}

void animal::set_name(const std::string& name)
{
	if (name.empty())
	{
		throw std::exception("Name cannot be empty.");
	}
	this->name = name;
}

void animal::set_age(int age)
{
	if (age < 0)
	{
		throw std::exception("Age must be positive.");
	}
	this->age = age;
}

void animal::print() const
{
	std::cout << name << " is " << age << " years old." << std::endl;
}

void animal::bath_time() const
{
	std::cout << name << " took a bath." << std::endl;
}