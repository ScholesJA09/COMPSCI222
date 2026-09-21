#include <iostream>
#include <string>
#include "person.h" //Include person class

int main()
{
	std::string name = "Alice"; //Parallel Arrays
	int id = 1234567;
	double salary = 55000.00;

	person p1("Alice", 1234567, 55000.00); //Using person class
	/*p1.set_name("Alice");
	p1.set_id(1234567);
	p1.set_salary(55000.00);*/

	/*person p2;
	p2.set_name("Bob");
	p2.id = 7654321;
	p2.set_salary(40000.00);

	p1.print();
	p2.print();*/

	return 0;
}