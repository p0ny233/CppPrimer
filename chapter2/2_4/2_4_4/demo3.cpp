int main()
{
    static int i = 0x1;
    static int j = 0x1;

    // constexpr int *p = (int *)0x123;
    constexpr int *p1 = &i;
    // p1 = &j;  // error
    
    int a = *p1;


    return 0;
}
