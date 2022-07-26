#include <iostream>
int main()
{
    int a = 1;
    unsigned b = 2;
    // unsigned long long l = 0x10000000000000000; // too large
    // std::cout << sizeof(l) <<std::endl;
    std::cout << "sizeof(a) = " << sizeof(a) << std::endl;  // 4
    std::cout << "sizeof(b) = " << sizeof(b) << std::endl;  // 4

    std::cout << "sizeof(10) = " << sizeof(10) << std::endl;  // 4
    std::cout << "sizeof(10u) = " << sizeof(10u) << std::endl;  // 4
    std::cout << "sizeof(10L) = " << sizeof(10L) << std::endl;  // 4
    std::cout << "sizeof(10uL) = " << sizeof(10uL) << std::endl;  // 4
    std::cout << "sizeof(012) = " << sizeof(012) << std::endl;  // 4
    std::cout << "sizeof(0xc) = " << sizeof(0xc) << std::endl;  // 4

    return 0;
}
