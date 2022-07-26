int main()
{
    int b = 1;
    int a = 2;
    int * const p = &a;
    
    p = &b;  // error
    *p = 22;

    return 0;
}
