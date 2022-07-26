#include <iostream>
int main()
{
    int a = 10;
    while (a)
    {
        std::cout << a << std::endl;
        --a;   
    }
    std::cout << a << std::endl;
    return 0;
}
