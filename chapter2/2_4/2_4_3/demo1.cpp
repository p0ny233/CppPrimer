int main()
{
    int i = 0x33;
    const int ci = 0x11;

    const int &r2 = i;
    const int &r3 = ci;
    int &ri = (int &)ci;
    ri = 0x22;
    return 0;
}
