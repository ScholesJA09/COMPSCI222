#include <iostream>
#include <string>

class vehicle //Dont do in same file
{
protected:
	const std::string manufacturer;
	vehicle() {}
	vehicle(const std::string& manufacturer) : manufacturer(manufacturer) {}

public:
	std::string get_manufacturer() const { return manufacturer; }
	virtual ~vehicle() = default; //Makes class abstract
};

class water_vehicle : public virtual vehicle //Virtual Inheritance
{
public:
	water_vehicle(const std::string& manufacturer) : vehicle(manufacturer) {}

	void submerge() const { std::cout << "Operating in water." << std::endl; }
};

class land_vehicle : public virtual vehicle
{
public:
	land_vehicle(const std::string& manufacturer) : vehicle(manufacturer) {}

	void drive() const { std::cout << "Operating on land." << std::endl; }
};

class amphibious_vehicle : public water_vehicle, public land_vehicle //The Diamond Problem
{
	public:
		amphibious_vehicle(const std::string& manufacturer)
			: water_vehicle(manufacturer)
			, land_vehicle(manufacturer) {}
};

int main()
{
	water_vehicle boat("Yamaha");
	boat.submerge();

	land_vehicle car("Ford");
	car.drive();

	amphibious_vehicle duck("GMC"); //Virtual Parents = One manufacturer field
	std::cout << duck.get_manufacturer() << std::endl;

	return 0;
}