#include <iostream>

int index_of(const double* array, int size, double key) //Exhaustive Search
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1; //Invalid index - Key not found
}
//Base Case: Order of 1
//Worst Case: Order of n

bool contains(const double* array, int size, double key)
{
	return index_of(array, size, key) != -1; //Removing branch
	//If index does not equal -1 = true, equals -1 = false
}

int min_index(const double* array, int size)
{
	if (size == 0)
	{
		return -1;
	}
	
	int min_index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[min_index])
		{
			min_index = i;
		}
	}

	return min_index;
}
//Base Case: Order of n
//Worst Case: Order of n

int max_index(const double* array, int size)
{
	if (size == 0)
	{
		return -1;
	}

	int max_index = 0;

	for (int i = 1; i < size; i++)
	{
		if (array[i] > array[max_index])
		{
			max_index = i;
		}
	}

	return max_index;
}

int main()
{
	double nums[] = {7.6, 9.5, 6.2, 3.6, 2.8, 5.4, 1.2, 8.9, 8.3, 5.6}; 
	std::cout << "Index of 6.2: " << index_of(nums, 10, 6.2) << std::endl;
	std::cout << "Index of 4.4: " << index_of(nums, 10, 4.4) << std::endl;
	std::cout << "Contains 2.8: " << contains(nums, 10, 2.8) << std::endl;
	std::cout << "Contains 8.2: " << contains(nums, 10, 8.2) << std::endl;
	std::cout << "Min Index: " << min_index(nums, 10) << std::endl;
	std::cout << "Min Value: " << nums[min_index(nums, 10)] << std::endl;

	return 0;
}