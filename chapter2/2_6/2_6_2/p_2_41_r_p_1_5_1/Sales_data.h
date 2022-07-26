#ifndef INCLUDE_STDHEADER
#include <iostream>
#include <string>
#define INCLUDE_STDHEADER
#endif

struct Sales_data {

    string bookNo;
    unsigned units_sold;
    double revenue;
    
    void Print();
    

};


    void Print()
    {
        std::cout << "ISBN: " << bookNo << " units_sold: "  << units_sold << " revenue: " << revenue;
    }
