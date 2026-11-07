#include "status.h"

std::string status_to_string(status s)
{
	switch (s)
	{
	case status::new_:
		return "New";
	case status::preparing:
		return "Preparing";
	case status::ready:
		return "Ready";
	case status::completed:
		return "Completed";
	case status::cancelled:
		return "Cancelled";
	default:
		return "Unsupported status";
	}
}