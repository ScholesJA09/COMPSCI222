#include <iostream>
#include "order.h"

int main()
{
	order* orders[7] = {
		new order(1234, 29.99, status::new_, type::dine_in),
		new order(2345, 39.99, status::new_, type::take_out),
		new order(3456, 19.99, status::new_, type::delivery),
		new order(4567, 43.99, status::new_, type::dine_in),
		new order(5678, 14.99, status::new_, type::take_out),
		new order(6789, 59.99, status::new_, type::delivery),
		new order(7890, 49.99, status::new_, type::take_out),
	};

	orders[0]->set_status(status::preparing);
	orders[2]->set_status(status::ready);
	orders[3]->set_status(status::ready);
	orders[4]->set_status(status::cancelled);
	orders[5]->set_status(status::completed);
	orders[6]->set_status(status::ready);

	for (int i = 0; i < 7; i++)
	{
		orders[i]->print();
	}

	return 0;
}