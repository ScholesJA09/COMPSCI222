#pragma once
#include <string>
#include "person3.h"
#include "employee2.h"

class instructor : public person3 , public employee2
{
protected:
	std::string department;
public:
	instructor(const std::string& first, const std::string& last, int id, const std::string& department, double salary);
	std::string get_department() const;
	void set_department(const std::string& department);
	void print() const override;
};