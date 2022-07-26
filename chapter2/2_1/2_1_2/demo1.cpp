#include <iostream>

int main()
{
    bool b = 42;  // 0x1
    b = -42;  // 0x1
    b = 0;  // 0x0
    b = 1.0;  // 0x1
    b = -1.0;  // 0x1
    b = 0.0;  // 0x0

    int i = b;
    return 0;

}
