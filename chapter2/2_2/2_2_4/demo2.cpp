#include <iostream>
int main()
{
    int sum = 0;
    int i = 999;
    for(int i = 1; i <= 10; i++)
    {
        sum += i;
        if(i == 10)
            std::cout << "i = " << i << std::endl;
    }

    std::cout << "i = " << i << std::endl;
    return 0;
}
