#include <iostream>
#include <string>
#include "pager.h"

pager::pager(int id) : id(id) {}

int pager::get_id() const
{
	return id;
}

void pager::receive_text(const std::string& message)
{
	std::cout << "*buzz* " << message << std::endl;
}