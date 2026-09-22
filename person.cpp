//Definitions for anything declared in h file
#include "person.h"
#include <iostream>

person::person(const std::string& name, int id, double salary)
{
	set_name(name);

	if (id < 1000000 || id > 9999999)
	{
		throw std::exception("ID must be 7-digit number.");
	}
	this->id = id;

	set_salary(salary);
}

std::string person::get_name() const
{
	return name;
}

int person::get_id() const
{
	return id;
}

double person::get_salary() const
{
	return salary;
}

void person::set_name(const std::string& name)
{
	if (name.empty()) //Check if name string is empty
	{
		throw std::exception("Name cannot be empty."); //If true, throw exception
	}
	this->name = name; //name field in person object = name in parameter
}

void person::set_salary(double salary)
{
	if (salary < 0)
	{
		throw std::exception("Salary must be a non-zero positive number.");
	}
	this->salary = salary;
}

void person::print() const
{
	std::cout << name << " (" << id << ") $" << salary << std::endl;
}