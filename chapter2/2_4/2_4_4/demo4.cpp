int main()
{
    int j = 0;
    constexpr int i = 42;

    constexpr const int *p = &i;
    constexpr int *p1 = &j;

    return 0;

}
