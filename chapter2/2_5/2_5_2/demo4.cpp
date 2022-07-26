int main()
{
    int i = 0;
    const int ci = i, &cr = ci;
    const auto f = ci;  // top const 

    return 0;
}
