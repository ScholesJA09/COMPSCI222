#include <iostream>
#include <vector> //Template Vector Class

int main()
{
	std::vector<int> numbers; //Only be used if you don't know how many elements are inserted
	//numbers(x); - set initial capacity at x elements

	numbers.push_back(1); //Appends new element at end of a vector
	numbers.push_back(2);
	numbers.push_back(3);

	for (int i = 0; i < numbers.size(); i++) //size() - how many elements have been pushed
	{
		std::cout <<  numbers.at(i) << ' '; // or numbers[i];
	}
	std::cout << std::endl;

	numbers.pop_back(); //Removes last element of vector

	for (int i = 0; i < numbers.size(); i++)
	{
		std::cout << numbers.at(i) << ' ';
	}
	std::cout << std::endl;

	//while (!numbers.empty()) - checks if numbers vector is empty

	return 0;
}