#include <iostream>

int temp = 0x0;
int main()
{
    int sum =0;
    for(int i = 1; i <= 10; i++)
    {
        sum += i;
        // temp = &i;
    }

    
    asm(
    
        "movl 0x18(%esp), %eax\n\t"
        "movl %eax, temp\n\t"
    );

    
    std::cout << "temp = ";
    //std::cout << std::hex << temp  << std::endl;
    std::cout << temp  << std::endl;

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}
