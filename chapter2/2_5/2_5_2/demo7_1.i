# 1 "demo7.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "demo7.cpp"
int main()
{
    int x = 0;
    auto * a = &x;
    auto b = &x;
    auto & c = x;
    auto d = c;
    const auto e = x;
    auto f = e;
    const auto& g = x;
    auto& h = g;
    return 0;
}
