#include "type.h"

std::string type_to_string(type t)
{
	switch (t)
	{
	case type::dine_in:
		return "Dine In";
	case type::take_out:
		return "Take Out";
	case type::delivery:
		return "Delivery";
	default:
		return "Unsupported type";
	}
}