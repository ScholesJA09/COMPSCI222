#pragma once
#include "employee.h"

class salaried_employee : public employee
{
private:
	double salary;

public:
	salaried_employee(const std::string& name, int age, int id, double salary);

	double get_salary() const;
	void set_salary(double salary);

	double get_earnings() const override;

	void print() const;
};