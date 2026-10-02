#include <iostream>

//Task 2/4
int range(const int* temps, int length)
{
	if (length == 0)
	{
		return -1;
	}

	int min_index = 0;
	int max_index = 0;

	for (int i = 1; i < length; i++)
	{
		if (temps[i] < temps[min_index])
		{
			min_index = i;
		}

		if (temps[i] > temps[max_index])
		{
			max_index = i;
		}
	}

	return temps[max_index] - temps[min_index];
}

//Task 3/4
void print_report_min(const int* temps, int length)
{
	int min_index = 0;
	int amount = 1;

	for (int i = 1; i < length; i++)
	{
		if (temps[i] < temps[min_index])
		{
			min_index = i;
			amount = 1;
		}
		else if (temps[i] == temps[min_index])
		{
			amount++;
		}
	}

	std::cout << "Min: " << temps[min_index] << " degrees C first observed on day " << min_index << " occurred " << amount << " time(s)." << std::endl;
}

void print_report_max(const int* temps, int length)
{
	int max_index = 0;
	int amount = 1;

	for (int i = 1; i < length; i++)
	{
		if (temps[i] > temps[max_index])
		{
			max_index = i;
			amount = 1;
		}
		else if (temps[i] == temps[max_index])
		{
			amount++;
		}
	}

	std::cout << "Max: " << temps[max_index] << " degrees C first observed on day " << max_index << " occurred " << amount << " time(s)." << std::endl;
}

//Task 4/4
int median(const int* temps, int length)
{
	int* arr = new int[length];
	for (int i = 0; i < length; i++)
	{
		arr[i] = temps[i];
	}


	for (int i = 0; i < length - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}

		if (min_index != i)
		{
			std::swap(arr[i], arr[min_index]);
		}
	}

	int median = arr[length / 2];

	delete[] arr;

	return median;
}

int main()
{
	//Task 1/4
	int temps[] = { 5, -2, 7, 7, 3, -10, 4, 0, -2, 9, 1, -10, 6, 0 };

	int r = range(temps, 14);
	std::cout << "Temperature range: " << r << " degrees C" << std::endl;

	print_report_min(temps, 14);
	print_report_max(temps, 14);

	int m = median(temps, 14);
	std::cout << "Median: " << m << " degrees C" << std::endl;

	std::cout << std::endl;

	int temps2[] = { 29, 27, 33, 28, 26, 31, 29, 30, 27, 28, 32, 33, 26, 29, 30, 28, 27, 26, 29, 30, 31 };

	int r2 = range(temps2, 21);
	std::cout << "Temperature range: " << r2 << " degrees C" << std::endl;

	print_report_min(temps2, 21);
	print_report_max(temps2, 21);

	int m2 = median(temps2, 21);
	std::cout << "Median: " << m2 << " degrees C" << std::endl;

	return 0;
}