#include <iostream>
int main()
{
    double dval;

    // correct
    double *pd = &dval;
    double *pd2 = pd;

    return 0;
}
