#include <iostream>
#include <string>
#include <iomanip>

//Task 1
static void task1()
{
	std::cout << std::fixed << std::setprecision(2);
	double arr[10];
	std::cout << "How many employees (1-10)? ";
	std::string employees_str;
	std::getline(std::cin, employees_str);
	int employees = std::stoi(employees_str);
	double total_wage = 0;

	while (employees < 1 || employees > 10)
	{
		std::cout << "How many employees (1-10)? ";
		std::string employees_str;
		std::getline(std::cin, employees_str);
		employees = std::stoi(employees_str);
	}
	
	for (int i = 0; i < employees; i++)
	{
		std::cout << "Enter hourly wage for employee #" << i + 1 << ": ";
		std::string wage_str;
		std::getline(std::cin, wage_str);
		double wage = std::stod(wage_str);
		while (wage < 15)
		{
			std::cout << "Enter hourly wage for employee #" << i + 1 << ": ";
			std::string wage_str;
			std::getline(std::cin, wage_str);
			wage = std::stod(wage_str);
		}
		arr[i] = wage;
		total_wage += wage;
	}

	for (int i = 0; i < employees; i++)
	{
		std::cout << "Employee #" << i + 1 << " earns $" << arr[i] << "/hr" << std::endl;
	}

	double average_wage = total_wage / employees;
	std::cout << "The average wage is $" << average_wage << "/hr" << std::endl;
}

//Task 3
static void task2()
{

}

int main()
{
	task1();
	return 0;
}