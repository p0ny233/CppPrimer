int main()
{
    const int ci = 1024;
    const int &r1 = ci;
    int &r2 = (int &)ci;

    // r1 = 0x11;  // error, compile error. Is Read-Only
    
    r2 = 0x22;  // normal

    return 0;
}
