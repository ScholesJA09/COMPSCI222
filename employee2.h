#pragma once

class employee2
{
protected:
	double salary;
public:
	employee2(double salary);
	double get_salary() const;
	void set_salary(double salary);
};