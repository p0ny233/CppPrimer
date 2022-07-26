#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item it;
    Sales_item items_sum;
    std::cin >> items_sum;

    while(std::cin >> it)
    {
        if(it.isbn() == items_sum.isbn())
        {
            items_sum += it;
        }else{

            std::cout << items_sum << std::endl;
            items_sum = it;

        }
    }

    std::cout << items_sum << std::endl;
    return 0;
}
