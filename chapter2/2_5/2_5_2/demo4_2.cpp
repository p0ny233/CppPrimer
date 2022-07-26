int main()
{
    int i = 0;
    const int ci = i, &cr = ci;
    auto const f = &ci;  // top const and low const   const int * cosnt f
    
    // f = &i; // top const   is  read-only
    // *f = 0x0;  // low const   is  read-only

    return 0;
}
