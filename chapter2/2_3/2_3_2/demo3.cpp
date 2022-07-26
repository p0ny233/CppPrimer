#include <iostream>
int main()
{
    double dval;
    double *pd = &dval;
    
    // 1. error
    // int *pi = pd;

    // 2. error
    // int *pi;
    // pi = &dval;
    



    // 1. error Fix
    //int *pi =(int *)pd;


    // 2. error Fix
    //int *pi;
    //pi = (int *)&dval;

    return 0;
}
