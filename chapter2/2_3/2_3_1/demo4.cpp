#include <iostream>
int main()
{
    int i = 0x10;
    int &r1 = i;
    int d = 0x20;
    // r1 = d;
    std::cout << "r1 = " << r1 << std::endl;
    asm(
    
        "lea 0x18(%esp), %eax\n\t"
        "movl %eax, 0x1c(%esp)\n\t"
    );
    std::cout << "r1 = " << r1 << std::endl;
    return 0;

}
