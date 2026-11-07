#pragma once
#include <string>

enum class type
{
	dine_in,
	take_out,
	delivery
};

std::string type_to_string(type t);