#include <iostream>
#include <string>
#include "person2.h"
#include "hourly_employee.h"
#include "salaried_employee.h"
#include <iomanip>

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	std::cout << "Task 1:" << std::endl;
	person2 p1("Alice", 21);
	person2 p2("Bob", 30);
	person2 p3("Chuck", 33);
	p1.print();
	p2.print();
	p3.print();


	std::cout << "\nTask 3:" << std::endl;
	hourly_employee h1("Derick", 27, 1234, 25.50);
	hourly_employee h2("Emily", 30, 5678, 15);
	hourly_employee h3("Frank", 44, 9012, 33);
	h1.print();
	h2.print();
	h3.print();

	std::cout << "\nTask 4:" << std::endl;
	salaried_employee s1("George", 49, 2345, 35000);
	salaried_employee s2("Hannah", 60, 3456, 54000);
	salaried_employee s3("Ian", 55, 4567, 72000);
	s1.print();
	s2.print();
	s3.print();

	person2* persons[12] = { &p1, &h1, &s1, new person2("Jessica", 20), &p2, &h2, &s2, new hourly_employee("Katie", 33, 6789, 22), &p3, &h3, &s3, new salaried_employee("Lloyd", 25, 7890, 120000) };

	double total_age = 0;
	double total_hourly_wage = 0;
	int hourly_count = 0;
	double total_salary = 0;
	int salary_count = 0;

	for (int i = 0; i < 12; i++)
	{
		total_age += persons[i]->get_age();

		if (hourly_employee* h = dynamic_cast<hourly_employee*>(persons[i]))
		{
			total_hourly_wage += h->get_wage();
			hourly_count++;
		}

		if (salaried_employee* s = dynamic_cast<salaried_employee*>(persons[i]))
		{
			total_salary += s->get_salary();
			salary_count++;
		}
	}

	std::cout << "\nTask 5:" << std::endl;
	std::cout << "Average age: " << (total_age / 12) << std::endl;
	std::cout << "Average hourly wage: $" << (total_hourly_wage / hourly_count) << std::endl;
	std::cout << "Average salary: $" << (total_salary / salary_count) << std::endl;

	delete persons[3];
	delete persons[7];
	delete persons[11];

	return 0;
}