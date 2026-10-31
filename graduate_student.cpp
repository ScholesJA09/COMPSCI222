#include <iostream>
#include <string>
#include "graduate_student.h"

graduate_student::graduate_student(const std::string& first, const std::string& last, int id, const std::string& major, const std::string& minor, double gpa, double salary)
	:student(first, last, id, major, minor, gpa), employee2(salary) { }

void graduate_student::print() const
{
	std::cout << last << ", " << first << " (" << id << ") [Studying " << major << "] GPA: " << gpa << " ($" << salary << ")" << std::endl;
}