int main()
{
    int x = 0;
    auto * a = &x;
    int** e = a;
    auto b = &x;
    auto & c = x;
    int * d = c;
    return 0;
}
