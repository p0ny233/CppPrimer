int main()
{
    int i = 0x42;
    const int &r1 = i;
    const int &r2 = 0x42;
    const int &r3 = r1 * 2;
    // int &r4 = r1 * 2;
    return 0;
}
