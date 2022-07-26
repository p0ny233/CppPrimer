#include <iostream>
int main()
{
    int val = 1024;
    int &refval = val;
    int i = refval;
    return 0;
}
