int main()
{

    int a = 3;
    long b = 4;
    decltype(a) c = a;  // c = 3, b = 4 , a = 3
    decltype(a = b) d = a;  // a = 3, b = 4, c = 3, d= 3 , d-> int&
    return 0;
}
