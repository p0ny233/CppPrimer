#include <iostream>
// #include "example"
int main()
{
    extern int i;
    int a = 0x11;
    a = i;
    return 0;
}
