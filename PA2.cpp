#include <iostream>
#include <string>
#include "product.h"


int main()
{
	//Task 2/4
    std::cout << "Welcome! Here are the products available for purchase:\n" << std::endl;

	product product_array[6] = {
        {"iPhone 14", 685.99, 3.6},
        {"Galaxy S22", 417.97, 4.2},
        {"Xbox Series S", 259.00, 4.4},
        {"PlayStation 5", 499.99, 4.8},
        {"Dell XPS 17", 3137.97, 3.9},
        {"MacBook Pro", 2099.00, 4.7}
    };

    for (int i = 0; i < 6; i++)
    {
        product_array[i].print();
    }

    std::cout << std::endl;

    //Task 3/4
    std::cout << "Best value products under $500:\n" << std::endl;

    for (int i = 0; i < 6; i++)
    {
        if (product_array[i].get_price() < 500)
        {
            product_array[i].print();
        }
    }

    std::cout << std::endl;

    //Task 4/4
    std::cout << "Everything's on sale! Here are the updated prices:\n" << std::endl;

    for (int i = 0; i < 6; i++)
    {
        product_array[i].set_price(product_array[i].get_price() * .75);
        product_array[i].print();
    }

	return 0;
}