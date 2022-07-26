#include <iostream>
int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    // std::cout << "The mul of " << a << " and " << b << " is " << a * b  <<std::endl;  // mul result
    std::cout << "The mul of " << a
    << " and " << b
    << " is " << a * b  << std::endl;

    return 0;
}
