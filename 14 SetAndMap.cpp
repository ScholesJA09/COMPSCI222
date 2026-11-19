#include <iostream>
#include <string>
#include <algorithm>
#include <set> //Template class, just like vector
#include <map> //Associative array

void set_demo()
//Sets are used to store unique values which maintain natural ordering
//They aren't very good at iteration, but are very efficient at determining whether or not they contain a value
{
	std::set<std::string> names = { "David", "Stephen", "Graham" };
	//Order you insert does not matter {David, Graham, Stephen}

	names.insert("Neil");

	//Sets do not accept duplicate values
	names.insert("David");

	//They also do not accept random access, no for (int i = 0...)
	for (std::set<std::string>::iterator i = names.begin(); i != names.end(); i++)
	{
		std::string value = *i; //Dereference operator
		std::cout << value << ' ';
	}
	std::cout << std::endl;

	//Enhanced for loop, standard form of iteration
	for (const std::string& str : names)
	{
		std::cout << str << ' ';
	}
	std::cout << std::endl;

	if (names.count("David")) //Returns true if names contains "David"
	{
		std::cout << "Yes, this set contains that value." << std::endl;
	}
	else
	{
		std::cout << "No, this set does not contain that value." << std::endl;
	}

	names.erase("Neil"); //If set has Neil, it will remove it and rebalance tree

	for (const std::string& str : names)
	{
		std::cout << str << ' '; //Current set does not have "Neil"
	}
	std::cout << std::endl;
}

void map_demo()
// A 'map' is a container class, part of the STL
// Maps are used to store 'key/value pairs' where keys are unique and maintain natural ordering
// They're useful when we need an 'associative' data structure
{
	std::map<int, std::string> names = {
		{9876, "David"},
		{5000, "Stephen"},
		{1234, "Graham"}
	};
	//<KeyType, ValueType>

	//Inserting pair object into map
	names.insert(std::pair<int, std::string>(7654, "Neil"));

	//Initilizer list
	names.insert({7654, "Neil"});

	//Maps DO NOT allow duplicate Keys, but allow duplicate values
	//Map determined by natural ordering of keys
	
	for (std::map<int, std::string>::iterator i = names.begin(); i != names.end(); i++)
	{
		std::cout << i->first << ":\t" << i->second << std::endl;
		//Getting id and name per map
	}

	//names at KEY 5000
	//If exists, changes name to "Roger", if not it will insert new key value pair
	names[5000] = "Roger"; //Replaces "Stephen" with "Roger"
	names[8765] = "Nick"; //Adds "Nick" at key value 8765

	names.erase(1234); //Remove key value pair at 1234

	//Enhanced for loop
	std::cout << std::endl;
	for (const std::pair<int, std::string>& entry : names)
	{
		std::cout << entry.first << ":\t" << entry.second << std::endl;
		//Iterator has first and second members
	}

	//ONLY NEED KEY
	if (names.count(9876)) //Returns true if map contains key value 9876
	{
		std::cout << "Yes, the map contains that key." << std::endl;
	}
	else
	{
		std::cout << "No, the map does not contain that key." << std::endl;
	}

	//MORE EFFIFIENT WITH ITERATOR - GET KEY AND VALUE
	std::map<int, std::string>::iterator find_id = names.find(9999);
	if (find_id == names.end()) //Iterates through entire map
	{
		std::cout << "No, the map does not contain that key." << std::endl;
	}
	else
	{
		std::cout << "Yes, the map contains the key " << find_id->first << " with value " << find_id->second << std::endl;
	}
}

int main()
{
	set_demo();
	std::cout << std::endl;
	map_demo();
}