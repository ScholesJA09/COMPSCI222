#include <iostream>
#include <string>

void static_array_demo() //stack - small, faster, cleans itself up
{
	const int length = 5;
	std::string arr[5];

	arr[0] = "Syd";
	arr[1] = "Roger";
	arr[2] = "Rick";
	arr[3] = "Nick";
	arr[4] = "Daved";

	std::cout << "All Elements:" << std::endl;
	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

void dynamic_array_demo() //heap - larger, slower, we have to clean data manually
{
	std::cout << "How many numbers do you want to enter? ";
	std::string length_str;
	std::getline(std::cin, length_str);
	int length = std::stoi(length_str);

	int* arr = new int[length]; //new = on heap

	for (int i = 0; i < length; i++)
	{
		std::cout << "Enter number " << i + 1 << ":" << std::endl;
		std::string num_str;
		std::getline(std::cin, num_str);
		
		arr[i] = std::stoi(num_str);
	}

	std::cout << "You entered " << length << " numbers." << std::endl;

	delete[] arr; //anytime you write new, write delete
}

int main()
{
	//Fundamental Types
	bool is_true = 1; //0 = false, 1 = true
	int num_apples = 15;
	char grade = 'B';
	float gpa = 3.82;
	double accuracy = 71.6666666667; //twice as precise as a float

	//User Input
	std::cout << "Hello World!" << std::endl;

	std::cout << "What is the course title?" << std::endl;
	std::string title;
	std::getline(std::cin, title);
	
	std::cout << "How many students are here today?" << std::endl;
	std::string num_students_str;
	std::getline(std::cin, num_students_str);
	int num_students = std::stoi(num_students_str); //string to int

	std::cout << title << " has " << num_students << " students today." << std::endl;

	//Arrays
	static_array_demo();
	dynamic_array_demo();

	//Semantics

	return 0;
}