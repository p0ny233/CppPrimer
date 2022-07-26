#include <string>
#include <iostream>

using std::string;
using std::cin;
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

   string getBookNo()
   {
        return bookNo;
   }

};

int main()
{
    Sales_data data1, data2;

    double price;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;


    if(data1.bookNo == data2.bookNo)
    {
        unsigned totalUnits_sold = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalUnits_sold
                  << " " << totalRevenue << " ";
        if(totalUnits_sold != 0)
            std::cout << totalRevenue / totalUnits_sold << std::endl;
        else
            std::cout << " (no sales) " << std::endl;


    }else{
        std::cout << "bookNo is diff";
        return -1;
    }
    
    
    return 0;
}
