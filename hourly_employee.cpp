#include <iostream>
#include "hourly_employee.h"

hourly_employee::hourly_employee(const std::string& name, int age, int id, double wage) : employee(name, age, id)
{
	set_wage(wage);
}

double hourly_employee::get_wage() const
{
	return wage;
}

void hourly_employee::set_wage(double wage)
{
	if (wage < 15)
	{
		throw std::exception("Wage must be at least $15.");
	}
	this->wage = wage;
}

double hourly_employee::get_earnings() const
{
	return wage;
}

void hourly_employee::print() const
{
	std::cout << "Hourly Employee: " << get_name() << " (" << get_age() << " years old) [ID #" << get_id() << "] wage = $" << get_wage() << "/hr" << std::endl;
}