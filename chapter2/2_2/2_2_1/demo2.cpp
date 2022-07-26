#include <iostream>
int main()
{
    long double a1 = 10.1342013442;
    // int a{a1}; c++ 11 std
    // int b = {a1}; c++ 11 std
    int c(a1), d = a1;
    return 0;
}
