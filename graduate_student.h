#pragma once
#include "student.h"
#include "employee2.h"

class graduate_student : public student, public employee2
{
public:
	graduate_student(const std::string& first, const std::string& last, int id, const std::string& major, const std::string& minor, double gpa, double salary);
	void print() const override;
};