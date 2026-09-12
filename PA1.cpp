#include <iostream>
#include <string>
#include <iomanip>

//Task 1
static void task1()
{
	std::cout << std::fixed << std::setprecision(2);
	double wages[10];
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
	
	//Wage per employee
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
		wages[i] = wage;
		total_wage += wage;
	}

	//Print
	for (int i = 0; i < employees; i++)
	{
		std::cout << "Employee #" << i + 1 << " earns $" << wages[i] << "/hr" << std::endl;
	}

	double average_wage = total_wage / employees;
	std::cout << "The average wage is $" << average_wage << "/hr" << std::endl;
}

//Task 2
static void task2()
{
	double wages[10];
	int hours[10];
	double gross_pay[10];

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
		//Wage per employee
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
		wages[i] = wage;
		total_wage += wage;

		//Hours per employee
		std::cout << "Enter hours worked for employee #" << i + 1 << ": ";
		std::string hours_str;
		std::getline(std::cin, hours_str);
		int hrs = std::stoi(hours_str);
		while (hrs < 0)
		{
			std::cout << "Enter hours worked for employee #" << i + 1 << ": ";
			std::string hours_str;
			std::getline(std::cin, hours_str);
			hrs = std::stoi(hours_str);
		}
		hours[i] = hrs;

		gross_pay[i] = wages[i] * hours[i];
	}

	//Print
	for (int i = 0; i < employees; i++)
	{
		std::cout << "Employee #" << i + 1 << " worked " << hours[i] << " hours at a rate of $" << wages[i] << "/hr for a total of $" << gross_pay[i] << std::endl;
	}

	double average_wage = total_wage / employees;
	std::cout << "The average wage is $" << average_wage << "/hr" << std::endl;
}

//Task 4
int max_gross_pay(double pay[], int length)
{
	int highest_pay = 0;
	for (int i = 1; i < length; i++)
	{
		if (pay[i] > pay[highest_pay])
		{
			highest_pay = i;
		}
	}

	return highest_pay;
}

//Task 5 & 6
void apply_overtime(double wage[], int hours[], double gross_pay[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (*(hours + i) > 40)
		{
			*(gross_pay + i) = *(wage + i) * 40 + *(wage + i) * 1.5 * (*(hours + i) - 40);
		}
	}
}

//Task 3
static void task3()
{
	std::cout << std::fixed << std::setprecision(2);
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

	//Dynamic arrays
	int* arr = new int[employees];
	double* wages = new double[employees];
	int* hours = new int[employees];
	double* gross_pay = new double[employees];

	for (int i = 0; i < employees; i++)
	{
		//Wage per employee
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
		wages[i] = wage;
		total_wage += wage;

		//Hours per employee
		std::cout << "Enter hours worked for employee #" << i + 1 << ": ";
		std::string hours_str;
		std::getline(std::cin, hours_str);
		int hrs = std::stoi(hours_str);
		while (hrs < 0)
		{
			std::cout << "Enter hours worked for employee #" << i + 1 << ": ";
			std::string hours_str;
			std::getline(std::cin, hours_str);
			hrs = std::stoi(hours_str);
		}
		hours[i] = hrs;

		gross_pay[i] = wages[i] * hours[i];
		apply_overtime(wages, hours, gross_pay, i + 1);
	}

	int index_highest_paid = 0;

	//Print
	for (int i = 0; i < employees; i++)
	{
		std::cout << "Employee #" << i + 1 << " worked " << hours[i] << " hours at a rate of $" << wages[i] << "/hr for a total of $" << gross_pay[i] << std::endl;

		index_highest_paid = max_gross_pay(gross_pay, i);
	}

	std::cout << "The highest paid employee was Employee #" << index_highest_paid + 1 << " who worked " << hours[index_highest_paid] << " hours at a rate of $" << wages[index_highest_paid] << "/hr for a total of $" << gross_pay[index_highest_paid] << std::endl;

	double average_wage = total_wage / employees;
	std::cout << "The average wage is $" << average_wage << "/hr" << std::endl;

	delete[] arr;
	delete[] wages;
	delete[] hours;
	delete[] gross_pay;
}

int main()
{
	//task1();
	//task2();
	task3();
	return 0;
}