#pragma once
#include "person2.h"

class employee : public person2
{
private:
	int id;

protected:
	employee(const std::string& name, int age, int id);

public:
	int get_id() const;

	virtual double get_earnings() const = 0;
};