#include <iostream>
#ifndef INCLUDE_STRING
#include <string>
using std::string
#define INCLUDE_STRING
#endif

#include "Sales_data.h"

int main()
{
    using std::cin;
    using std::cout;
    Sales_data data1, data2;
    double price = 0.0;
    unsigned totalUnits_sold = 0; 
    double totalPrice = 0.0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(data1.bookNo == data2.bookNo)
    {
        totalUnits_sold = data1.units_sold + data2.units_sold;
        totalPrice = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalUnits_sold << " "
             << totalPrice;

        if(totalUnits_sold != 0)
        {
            cout << " " << totalPrice / totalUnits_sold << std::endl;
        
        }else
        {
            cout << " (no sales) " << std::endl;

        }
    }else
    {
        cout << "ISBN is Diff " << std::endl;
        return -1;
    }

    return 0;
}
