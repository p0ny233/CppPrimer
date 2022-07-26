#include <iostream>

int main()
{
    int a = 1;
    int sum = 0;
    while( a <= 10)
    {
        sum += a;
        a++;

    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
