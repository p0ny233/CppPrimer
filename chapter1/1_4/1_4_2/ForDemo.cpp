#include <iostream>
int main()
{
    int sum = 0;
    for(int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    std::cout << "Sum of 1 to 10 inclusive is : " << sum << std::endl;
    std::cout << i << std::endl;
    return 0;
}
