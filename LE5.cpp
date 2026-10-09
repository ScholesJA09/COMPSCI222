#include <iostream>
#include <string>
#include "item.h"
#include "computer.h"
#include "television.h"
#include "laptop.h"
#include "desktop.h";
#include <iomanip>;

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	item* items[] = 
	{new television(1097.99, "Q60B", "Samsung", 75),
	new television(179.99, "F20", "Insignia", 32),
	new television(14997.99, "QN90A", "Samsung", 98),
	new desktop(2229.39, "Z2G4", "HP", 1024),
	new desktop(699.99, "Inspiron 3910", "Dell", 256),
	new desktop(204.62, "M92p", "Lenovo", 3072),
	new laptop(1093.60, "Elitebook 850 G8", "HP", 512, 4),
	new laptop(1879, "XPS 17", "Dell", 1024, 10),
	new laptop(169.99, "A4-9120e", "Gateway", 64, 8)
	};

	std::cout << "ITEMS AVAILABLE FOR SALE:\n" << std::endl;

	for (int i = 0; i < 9; i++)
	{
		items[i]->print();
	}

	std::cout << "\nALL COMPUTERS ARE ON SALE THIS WEEKEND! 25% OFF!\n" << std::endl;

	for (int i = 0; i < 9; i++)
	{
		if (computer* c = dynamic_cast<computer*>(items[i]))
		{
			c->set_price(c->get_price() * .75);
		}
	}

	for (int i = 0; i < 9; i++)
	{
		items[i]->print();
	}

	for (int i = 0; i < 9; i++)
	{
		delete items[i];
	}

	return 0;
}