#include <iostream>
#include "salaried_employee.h"

salaried_employee::salaried_employee(const std::string& name, int age, int id, double salary) : employee(name, age, id)
{
	set_salary(salary);
}

double salaried_employee::get_salary() const
{
	return salary;
}

void salaried_employee::set_salary(double salary)
{
	if (salary < 30000)
	{
		throw std::exception("Salary must at least be $30,000");
	}
	this->salary = salary;
}

double salaried_employee::get_earnings() const
{
	return salary;
}

void salaried_employee::print() const
{
	std::cout << "Salaried Employee: " << get_name() << " (" << get_age() << " years old) [ID #" << get_id() << "] salary = $" << get_salary() << std::endl;
}