#include <iostream>
#include <string>

class vehicle //Dont do this in same file
{
private: 
	std::string* passengers; 
	int num_seats;

public:
	vehicle(int num_seats) : num_seats(num_seats) , passengers(new std::string[num_seats])
	{
		/*this->num_seats = num_seats;
		passengers = new std::string[num_seats];*/
		//Initializing fields instead
	}

	~vehicle() //Destructor - cleans up anything in the object, heap allocations being deallocated
	{
		delete[] passengers;
	}
};

int main()
{
	vehicle v1(5);

	return 0;
}