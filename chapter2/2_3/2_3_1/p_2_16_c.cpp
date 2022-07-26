#include <iostream>
int main()
{
    int i = 0x11, &r1 = i;
    double d = 0, &r2 = d;

    i = r2;
    return 0;
}
