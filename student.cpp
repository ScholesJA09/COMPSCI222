#include <iostream>
#include <string>
#include "student.h"

student::student(const std::string& first, const std::string& last, int id, const std::string& major, const std::string& minor, double gpa)
	: person3(first, last, id)
{
	set_major(major);
	set_minor(minor);
	set_gpa(gpa);
}

std::string student::get_major() const
{
	return major;
}

std::string student::get_minor() const
{
	return minor;
}

double student::get_gpa() const
{
	return gpa;
}

void student::set_major(const std::string& major)
{
	if (major.empty())
	{
		throw std::exception("Major cannot be empty.");
	}
	this->major = major;
}

void student::set_minor(const std::string& minor)
{
	if (minor.empty())
	{
		throw std::exception("Minot cannot be empty.");
	}
	this->minor = minor;
}

void student::set_gpa(double gpa)
{
	if (gpa < 0.0 || gpa > 4.0)
	{
		throw std::exception("GPA must be between 0.0-4.0.");
	}
	this->gpa = gpa;
}

void student::print() const
{
	std::cout << last << ", " << first << " (" << id << ") " << "[" << major << " Major / " << minor << " Minor] GPA: " << gpa << std::endl;
}