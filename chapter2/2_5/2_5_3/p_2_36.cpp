int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;  // c = 3, c -> int
    decltype((b)) d = a;  // d -> int& , d -> a
    ++c;  // c = 4 , a = 3, b = 4
    ++d;  // d = 4 , a = 4, b = 4 , c = 4
    return 0;

}
