int main()
{
    int b = 1;
    int a = 2;
    const int * p = &a;
    
    p = &b;
    *p = 22;

    return 0;
}
