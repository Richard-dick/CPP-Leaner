#include <iostream>
#include "Sales_item.h"

int main() 
{
    Sales_item item, sum_item;

    if( std::cin >> sum_item )
    {
        while(std::cin >> item)
        {
            if (item.isbn() == sum_item.isbn()) {
                sum_item += item;
            } else {
                std::cerr << "Data must refer to same ISBN" 
                        << std::endl;
                return -1;
            }
        }
    }
    std::cout << sum_item << std::endl;
	return 0;
}