#pragma once
#include <string>

class person2
{
private:
	std::string name;
	int age;

public:
	person2(const std::string& name, int age);

	std::string get_name() const;
	int get_age() const;

	void set_name(const std::string& name);
	void set_age(int age);

	virtual void print() const;
};