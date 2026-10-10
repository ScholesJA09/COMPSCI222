#include <iostream>
#include "person2.h"

person2::person2(const std::string& name, int age)
{
	set_name(name);
	set_age(age);
}

std::string person2::get_name() const
{
	return name;
}

int person2::get_age() const
{
	return age;
}

void person2::set_name(const std::string& name)
{
	if (name.empty())
	{
		throw std::exception("Name cannot be empty.");
	}
	this->name = name;
}

void person2::set_age(int age)
{
	if (age > 100 || age < 18)
	{
		throw std::exception("Age must be between 18 and 100.");
	}
	this->age = age;
}

void person2::print() const
{
	std::cout << "Person: " << name << " (" << age << " years old)" << std::endl;
}