#include <iostream>
#include <vector>
#include <algorithm> //Works with iterators

int main()
{
	std::vector<int> nums = { 11, 1, 1, 2, 9, 29, 2, 0, 6, 20, 26 };

	std::vector<int>::iterator it = nums.begin();
	//Iterator through a vector of type int at beginning of nums

	std::cout << *it << std::endl; //Return value at iterator

	it++; //Advance iterator to next element

	std::cout << *it << std::endl;

	for (std::vector<int>::iterator i = nums.begin(); i != nums.end(); i++) //i = iterator
	{
		std::cout << *i << ' '; //Iterating through every element in vector
	}
	std::cout << std::endl;

	//FINDING A CERTAIN ELEMENT
	std::vector<int>::iterator has_num = std::find(nums.begin(), nums.end(), 4);
	//find(where you want to start, end, looking for) function in algorithm library

	if (has_num == nums.end()) //Did not find element
	{
		std::cout << "Not found." << std::endl;
	}
	else //Found element
	{
		std::cout << "Found " << *has_num << std::endl;
	}

	return 0;
}