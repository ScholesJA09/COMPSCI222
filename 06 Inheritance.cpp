#include <iostream>
#include "animal.h"
#include "dog.h"

int main()
{
	dog d("Koro", 5);
	d.print();
	d.speak();
	d.bath_time();

	animal* a = &d; //Upcasting - Always safe

	animal* animal_ptr = new dog("Abby", 16);
	animal_ptr->print();
	delete animal_ptr;

	animal* animals[] = { &d, new dog("Oliver", 13), new dog("Patrick", 5)};
	for (int i = 0; i < 3; i++)
	{
		animals[i]->print();
	}

	for (int i = 1; i < 3; i++)
	{
		delete animals[i];
	}

	if (dog* d1 = dynamic_cast<dog*>(animals[i])) //Downcasting - Need to be explicit
	{
		d1->print();
	}

	return 0;
}