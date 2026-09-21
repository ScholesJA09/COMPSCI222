#pragma once //Only compile file once
#include <string>

class person //Declaring person class exists
{
	//Declaring class variables (FIELDS)
	//Encapsulation: Not allowing fields to be changed directly (PRIVATE)
	std::string name;
	int id;
	double salary;

public:
	//Constructor
	person(const std::string&, int id, double salary);

	//Getter Methods - return encapsulated value (READ)
	std::string get_name();
	int get_id();
	double get_salary();

	//Setter Methods - set encapsulated value (WRITE)
	void set_name(const std::string& name); //Const reference to pass 8 bytes
	void set_salary(double salary);

	void print(); //Declare class function (METHOD)
	//Fields and Methods are members of a class
};