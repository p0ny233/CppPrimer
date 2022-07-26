#include <iostream>
#include <stdio.h>
int main()
{
    std::cout << "sizeof('a') = " << sizeof('a') << std::endl;
    std::cout << "sizeof(L'a') = " << sizeof(L'a') << std::endl;

    std::cout << "sizeof(\"a\") = "  << sizeof("a") << std::endl;  // 2
    std::cout << "sizeof(L\"a\") = " << sizeof(L"a") << std::endl;  // 8

    return 0;

}
