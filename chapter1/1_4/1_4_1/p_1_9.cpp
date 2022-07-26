#include <iostream>
int main()
{
    int a = 51;
    int sum = 50;
    while(a <= 100)
    {
        sum += a;
        std::cout << a << std::endl;
        a++;
    }

    std::cout << "The sum of 50 to 100 is " << sum << std::endl;
    return 0;
}
