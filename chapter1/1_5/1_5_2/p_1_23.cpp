#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item it;
    Sales_item it2;
    int cnt = 0;

    if(std::cin >> it)
    {
        int cnt = 1;

        while(std::cin >> it2 )
        {
            if(it.isbn() == it2.isbn())
                cnt++;
            else{
                std::cout << "ISBN: " << it.isbn() << "\t销售记录: " << cnt << std::endl;
                cnt = 1;
                it = it2;
            }
        }

        std::cout << "ISBN: " << it.isbn() << "\t销售记录: " << cnt << std::endl;
        return 0;
    }

}
