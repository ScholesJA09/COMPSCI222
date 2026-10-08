#pragma once
#include <string>

class animal
{
protected: //Allows subclasses to access them
	std::string name;
	int age;

	animal(const std::string& name, int age);

public:

	std::string get_name() const;
	int get_age() const;

	void set_name(const std::string& name);
	void set_age(int age);

	void print() const;

	virtual void speak() const = 0; //virtual = can be overwritten by child classes
	//only dog is allowed to "speak"
	//No instantiation of animal class

	virtual void bath_time() const; //Not a pure virtual function
	//Child classes have an option for overriding it
};