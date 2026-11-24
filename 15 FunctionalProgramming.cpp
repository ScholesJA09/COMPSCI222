#include <iostream>
#include <string>
#include <vector>
#include <functional> //Functional programming

#pragma region Provided Functions
void print_message(const std::string& message) {
	std::cout << "\t" << message << std::endl;
}
void say_hello(const std::string& name) {
	std::cout << "\tHello, " << name << "!" << std::endl;
}
bool is_even(int n) {
	return n % 2 == 0;
}
bool is_prime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
#pragma endregion

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

template <typename TIterator, typename TFunc>
void apply_to_all(TIterator begin, TIterator end, TFunc func)
{
	for (TIterator it = begin; it != end; it++)
	{
		func(*it);
	}
}

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

void std_function_demo()
{
	std::function<void(const std::string&)> my_std_function = print_message;
	//Stores function variable as a void which takes a const reference to a string as an argument
	//Under the hood wraps a raw pointer, the more modern approach

	my_std_function("Bob");
	//Can invoke with value

	my_std_function = say_hello;
	my_std_function("Alice");
	//say_hello is also void and has same argument type

	std::vector<std::string> names = { "Alice", "Bob", "Charlie", "Dave" };
	std::cout << "Applying print_message to all names:" << std::endl;
	apply_to_all(names.begin(), names.end(), print_message);
	apply_to_all(names.begin(), names.end(), say_hello);
}

int main()
{
	std::cout << "Raw Pointers Demo:" << std::endl;
	raw_pointers_demo();

	std::cout << "\nstd::function Demo:" << std::endl;
	std_function_demo();

	return 0;
}