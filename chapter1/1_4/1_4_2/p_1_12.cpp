#include <iostream>

int main()
{
    int sum = 0;
    for(int i = -100; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "result : " << sum << std::endl;
    return 0;
}
