#include <iostream>
#include <string>
#include "person3.h"
#include "student.h"
#include "instructor.h"
#include "graduate_student.h"
#include "employee2.h"

int main()
{
	person3* my_university[9] = {
		new student("Jacob", "Scholes", 2063728, "Media Arts and Game Development", "Computer Science", 3.8),
		new student("Caleb", "Williams", 9876543, "Communications", "Business", 3.1),
		new student("Connor", "Bedard", 2468024, "Business", "Sports Marketing", 3.3),
		new instructor("Brian", "Maresso", 3692581, "Computer Science", 950000),
		new instructor("Nick", "Hwang", 1122334, "Media Arts and Game Development", 800000),
		new instructor("Zachary", "Oster", 1122334, "Compuer Science", 900000),
		new graduate_student("Josh", "Lang", 8902610, "Marketing", "Spanish", 3.7, 300000),
		new graduate_student("Sarah", "Webber", 3459870, "Physics", "Mathmatics", 3.9, 350000),
		new graduate_student("Bob", "Miller", 6767123, "Accounting", "Business", 2.8, 250000)
	};

	std::cout << "Everyone at the university:" << std::endl;

	for (int i = 0; i < 9; i++)
	{
		my_university[i]->print();
	}

	std::cout << "\nGraduate students enrolled at the university:" << std::endl;

	for (int i = 0; i < 9; i++)
	{
		if (graduate_student* gs = dynamic_cast<graduate_student*>(my_university[i]))
		{
			gs->print();
		}
	}

	double total_gpa = 0;
	int count = 0;

	for (int i = 0; i < 9; i++)
	{
		if (student* s = dynamic_cast<student*>(my_university[i]))
		{
			total_gpa += s->get_gpa();
			count++;
		}
	}

	std::cout << "\nAverage GPA off all students at the university: " << (total_gpa/count) << std::endl;

	person3* highest_paid = nullptr;
	person3* lowest_paid = nullptr;
	double highest_sal = -1.0;
	double lowest_sal = -1.0;

	for (int i = 0; i < 9; i++)
	{
		if (employee2* e = dynamic_cast<employee2*>(my_university[i]))
		{
			double sal = e->get_salary();
			if (highest_paid == nullptr || sal > highest_sal)
			{
				highest_sal = sal;
				highest_paid = my_university[i];
			}
			else if (lowest_paid == nullptr || sal < lowest_sal)
			{
				lowest_sal = sal;
				lowest_paid = my_university[i];
			}
		}
	}

	std::cout << "\nHighest paid employee: " << std::endl;\
	highest_paid->print();

	std::cout << "\nLowest paid employee: " << std::endl;
	lowest_paid->print();

	return 0;
}