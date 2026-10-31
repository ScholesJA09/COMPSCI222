#pragma once
#include <string>
#include "person3.h"

class student : public person3
{
protected:
	std::string major;
	std::string minor;
	double gpa;
public:
	student(const std::string& first, const std::string& last, int id, const std::string& major, const std::string& minor, double gpa);
	std::string get_major() const;
	std::string get_minor() const;
	double get_gpa() const;
	void set_major(const std::string& major);
	void set_minor(const std::string& minor);
	void set_gpa(double gpa);
	void print() const override;
};