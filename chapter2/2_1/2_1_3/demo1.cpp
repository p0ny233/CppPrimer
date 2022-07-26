#include <iostream>
int main()
{
    long int a = 1L;
    long double b = 2.0L;
    std::cout << sizeof(1L) << std::endl;
    std::cout << sizeof(1.0L) << std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    return 0;
}
