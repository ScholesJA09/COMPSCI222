#pragma once
#include <string>

enum class status
{
	new_,
	preparing,
	ready,
	completed,
	cancelled
};

std::string status_to_string(status s);