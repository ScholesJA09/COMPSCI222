#include <iostream>
#include <string>
#include <fstream> //File Stream Library

std::string path = "myfile.txt";

void write_demo()
{
	std::ofstream output; //Output File Stream object
	output.open(path); //Opening output file

	//*Will create new path is not already exists, but not new directory*

	if (output.is_open()) //boolean cheacking if stream is open
	{
		output << "Hello, World!" << std::endl; //Writing to output (Overwrite Mode)
		std::cout << "Success!" << std::endl;
	}
	else
	{
		std::cout << "Could not write to file." << std::endl;
	}
}

void read_demo()
{
	std::ifstream input; //Input File Stream object
	input.open(path);

	if (input.is_open())
	{
		std::string line;
		std::getline(input, line); //Not whitespace delimated
		std::cout << "Read " << line << " from file." << std::endl;
	}
	else
	{
		std::cout << "Failed to read from file." << std::endl;
	}

	input.close(); //Always close file when reading
}

int main()
{
	write_demo();
	read_demo();
	return 0;
}