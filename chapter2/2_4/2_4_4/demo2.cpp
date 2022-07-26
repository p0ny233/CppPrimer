constexpr int size()
{
    return 1;
}

int main()
{
    constexpr int mf = 20;
    constexpr int limit = mf + 1;
    constexpr int sz = size();
    return 0;

}
