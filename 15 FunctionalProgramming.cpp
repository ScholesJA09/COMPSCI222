#include <iostream>
#include <string>
#include <vector>

template<typename TIterator, typename TArg>
void apply_to_all_raw(TIterator begin, TIterator end, void (*func)(const TArg&)) //Iterator as a parameter
{
	for (TIterator it = begin; it != end; it++)
	{
		TArg value = *it;
		func(value);
	}
}
//Will work for vector, set, map...

void raw_pointers_demo()
{
	void (*my_function) (const std::string&) = &print_message;
	//Only stores functions that return void that take a const reference of a string as a parameter

	my_function("Bob");
	//Invoke variable that points to a function

	my_function = &say_hello;
	//Now pointing to different function

	std::vector<std::string> names = { "Alice", "Bob", "Charlie", "Dave" };
	apply_to_all_raw(names.begin(), names.end(), print_message);
	apply_to_all_raw(names.begin(), names.end(), say_hello);

}

int main()
{

	return 0;
}