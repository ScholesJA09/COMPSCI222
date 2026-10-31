#pragma once
#include <string>

class person3
{
protected:
	std::string first;
	std::string last;
	int id;
public:
	person3(const std::string& first, const std::string& last, int id);
	std::string get_first() const;
	std::string get_last() const;
	int get_id() const;
	void set_first(const std::string& first);
	void set_last(const std::string& last);
	void set_id(int id);
	virtual void print() const = 0;
};