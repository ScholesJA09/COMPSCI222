#include <iostream>
#include <vector>
#include <set>
#include <map>

int main()
{
	//1/3
	std::vector<int> nums = { 12, 12, 4, 5, 19, 19, 5, 0, 17, 17, 12, 14, 19, 2, 8, 10, 2, 10, 2, 7, 11, 14, 1, 4, 15, 16, 7, 10, 14, 5, 5, 4, 2, 11, 4, 14, 16, 7, 4, 19, 11, 5, 8, 6, 19, 14, 7, 6, 4, 16 };

	std::cout << "All numbers:" << std::endl;
	for (int num : nums)
	{
		std::cout << num << ", ";
	}

	//2/3
	std::set<int> nums2;
	std::cout << "\n\nUnique Numbers:" << std::endl;
	for (int num : nums)
	{
		nums2.insert(num);
	}

	for (int num : nums2)
	{
		std::cout << num << ", ";
	}

	//3/3
	std::cout << "\n\nFrequency:" << std::endl;
	for (int num : nums2)
	{
		int count = 0;
		for (int num1 : nums)
		{
			if (num == num1)
			{
				count++;
			}
		}
		if (count == 1)
		{
			std::cout << num << " appears " << count << " time" << std::endl;
		}
		else
		{
			std::cout << num << " appears " << count << " times" << std::endl;
		}
	}

	return 0;
}