#include <iostream>
#include <string>

//Task 3
double get_average(double* arr, int assignments)
{
	double total_scores = 0;
	for (int i = 0; i < assignments; i++)
	{
		total_scores += arr[i];
	}
	double score_average = total_scores / assignments;
	return score_average;
}

int main()
{
	//Task 1
	std::cout << "How many assignments have you completed? ";
	std::string assignments_str;
	std::getline(std::cin, assignments_str);
	int assignments = std::stoi(assignments_str);

	if (assignments < 1)
	{
		std::cout << "Invalid input." << std::endl;
		return 1;
	}

	double* arr = new double[assignments];

	//Task 2
	std::cout << "Enter your grade (0-100) for assignment..." << std::endl;

	for (int i = 0; i < assignments; i++)
	{
		std::cout << "#" << i + 1 << ") ";
		std::string grade_str;
		std::getline(std::cin, grade_str);
		double grade = std::stod(grade_str);
		if (grade > 100 || grade < 0)
		{
			std::cout << "Invalid input." << std::endl;
			return 2;
		}
		arr[i] = grade;
	}

	//Task 4
	std::cout << "Report Card:" << std::endl;
	std::cout << "Scores: ";
	for (int i = 0; i < assignments; i++)
	{
		if (i < assignments - 1)
		{
			std::cout << arr[i] << ",";
		}
		else
		{
			std::cout << arr[i] << std::endl;
		}
	}

	std::cout << "Average: ";
	double average = get_average(arr, assignments);
	std::cout << average << std::endl;

	delete[] arr;
	return 0;
}