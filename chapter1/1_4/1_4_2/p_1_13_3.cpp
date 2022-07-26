#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    if(a == b)
    {
        std::cout << a << std::endl;
        return 0;
    }

    if(a < b)
    {
        for(;a <= b; a++)
        {
            std::cout << a << std::endl;
        }
    }else
    {
        for(;b <= a; b++)
        {
            std::cout << b << std::endl;
        }
    }

    return 0;



}

