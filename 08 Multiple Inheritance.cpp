#include <iostream>
#include <string>

class vehicle //Dont do in same file
{
protected:
	std::string manufacturer;
	vehicle(const std::string& manufacturer) : manufacturer(manufacturer) {}

public:
	std::string get_mmanufacturer() const { return manufacturer; }
	virtual ~vehicle() = default; //Makes class abstract
};

class water_vehicle : public vehicle
{
public:
	water_vehicle(const std::string& manufacturer) : vehicle(manufacturer) {}

	void submerge() const { std::cout << "Operating in water." << std::endl; }
};

class land_vehicle : public vehicle
{
public:
	land_vehicle(const std::string& manufacturer) : vehicle(manufacturer) {}

	void drive() const { std::cout << "Operating on land." << std::endl; }
};



int main()
{
	water_vehicle boat("Yamaha");
	boat.submerge();
	land_vehicle car("Ford");
	car.drive();

	return 0;
}