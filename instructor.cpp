#include <iostream>
#include <string>
#include "instructor.h"
#include "employee2.h"

instructor::instructor(const std::string& first, const std::string& last, int id, const std::string& department, double salary)
	: person3(first, last, id), employee2(salary)
{
	set_department(department);
}

std::string instructor::get_department() const
{
	return department;
}

void instructor::set_department(const std::string& department)
{
	if (department.empty())
	{
		throw std::exception("Department cannot be empty.");
	}
	this->department = department;
}

void instructor::print() const
{
	std::cout << "Prof. " << last << " (" << id << ") [Dept.of " << department << "] ($" << salary << ")" << std::endl;
}