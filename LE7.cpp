#include <iostream>
#include "device.h"
#include "phone.h"
#include "smartphone.h"
#include "computer2.h"
#include "pager.h"

int main() {
	// This code will not compile until you implement the required classes.
	// Make sure to #include the header files for these classes, too.
#pragma region DO NOT MODIFY
	device* devices[11] = {
		new smartphone("7732025862"),
		new computer2("UWW-LIBRARY-PC"),
		new phone("2624721992"),
		new pager(1234),
		new computer2("UWW-OFFICE-MAC"),
		new computer2("UWW-OFFICE-PC"),
		new pager(5678),
		new phone("2624721666"),
		new smartphone("7082222222"),
		new smartphone("8005882300"),
		new pager(9999),
	};
#pragma endregion

	std::cout << "Testing phone services..." << std::endl;
	// Iterate over each element in the devices array
	// If it is a call_receiver, call the receive_call method with the number "2624721234"

	for (int i = 0; i < 11; i++)
	{
		if (call_receiver* c = dynamic_cast<call_receiver*>(devices[i]))
		{
			c->receive_call("2624721234");
		}
	}

	std::cout << "\nTesting email services..." << std::endl;
	// Iterate over each element in the devices array
	// If it is an email_receiver, call the receive_email method with the sender "alerts@uww.edu" and subject "System Test"

	for (int i = 0; i < 11; i++)
	{
		if (email_receiver* e = dynamic_cast<email_receiver*>(devices[i]))
		{
			e->receive_email("alerts@uww.edu", "System Test");
		}
	}

	std::cout << "\nTesting text services..." << std::endl;
	// Iterate over each element in the devices array
	// If it is a text_receiver, call the receive_text method with the message "r u receiving?"

	for (int i = 0; i < 11; i++)
	{
		if (text_receiver* t = dynamic_cast<text_receiver*>(devices[i]))
		{
			t->receive_text("r u receiving?");
		}
	}

#pragma region DO NOT MODIFY
	for (int i = 0; i < 11; i++) {
		delete devices[i];
	}

	return 0;
#pragma endregion
}