#include <iostream>
int main()
{
    int ival = 0x1;
    int *pi = &ival;
    int **ppi = &pi;

    std::cout << "ival = " << ival
              << "\n*pi = " << *pi
              << "\n**ppi = " << **ppi << std::endl;
            
    return 0;
}
