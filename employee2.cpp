#include <string>
#include "employee2.h"

employee2::employee2(double salary)
{
	set_salary(salary);
}

double employee2::get_salary() const
{
	return salary;
}

void employee2::set_salary(double salary)
{
	if (salary < 0)
	{
		throw std::exception("Salary cannot be negative.");
	}
	this->salary = salary;
}