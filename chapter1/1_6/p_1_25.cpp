#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    Sales_item trans;
    if(std::cin >> total)
    {
        while(std::cin >> trans)
        {
            if(trans.isbn() == total.isbn())
            {
                total += trans;
            }else{
                std::cout << total << std::endl;
                total = trans;
            }

        }

        std::cout << total << std::endl;
    }else
    {
        std::cout << "input error !!!\n Data Error !!! Quit !!!" << std::endl;
    }
    


    return 0;

}
