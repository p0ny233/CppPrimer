#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item it1, it2;
    std::cin >> it1 >> it2;

    if(it1.isbn() == it2.isbn())
    {
        std::cout << it1 + it2 << std::endl;
        return 0;
    }else {
        std::cerr << "Data must refer to same ISBN"
            << std::endl;
    }
    return -1;

}
