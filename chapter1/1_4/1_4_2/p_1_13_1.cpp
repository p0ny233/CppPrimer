#include <iostream>

int main()
{
    int sum = 50;
    for(int i = 51; i <= 100; i++)
    {
        sum += i;
    }

    std::cout << "result :" <<  sum << std::endl;
    return 0;
}
