int main()
{
    int i = 0x11;
    const int &r1 = i;
    r1 = 0x22;

    return 0;
}
