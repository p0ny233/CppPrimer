#include <iostream>
int main()
{
    std::cout << "sizeof(10) = " << sizeof(10) << std::endl;
    std::cout << "sizeof(10u) = " << sizeof(10u) << std::endl;
    std::cout << "sizeof(10.) = " << sizeof(10.) << std::endl;
    std::cout << "sizeof(10e-2) = " << sizeof(10e-2) << std::endl;
    return 0;
}
