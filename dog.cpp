#include <iostream>
#include "dog.h"

dog::dog(const std::string& name, int age) : animal(name, age) //calls parent constructor
{

}

void dog::speak() const //Different behavoir compared to other animals
{
	std::cout << "Woof!" << std::endl;
}