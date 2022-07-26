#include <iostream>
int main()
{
    int val = 0x11;
    int &refval = val;
    //int & &refrefval = refval;
    char str1[] = "Hello World";
    char &refstr = str1;

    return 0;
}
