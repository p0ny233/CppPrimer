int main()
{
    double**** d;

    const int i = 42;
    d = i;
    auto j = i;
    d = j;

    const auto &k = i;
    d = k;
    auto *p = &i;
    
    d = p;
    const auto j2 = i, &k2 = i;
    
    d = j2;

    d = k2;
    return 0;

}
