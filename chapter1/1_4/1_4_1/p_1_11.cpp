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
        while(a <= b)
        {
            std::cout << a << std::endl;
            a++;
        }

    }else
    {
        while(b <= a)
        {
            std::cout << b << std::endl;
            b++;

        }

        
    }


    return 0;


}
