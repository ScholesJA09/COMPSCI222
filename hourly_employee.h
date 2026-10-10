#pragma once
#include "employee.h"

class hourly_employee : public employee
{
private:
	double wage;

public:
	hourly_employee(const std::string& name, int age, int id, double wage);

	double get_wage() const;
	void set_wage(double wage);

	double get_earnings() const override;

	void print() const;
};