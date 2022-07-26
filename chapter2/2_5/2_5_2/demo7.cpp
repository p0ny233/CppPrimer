int main()
{
    int x = 0;  // int
    auto * a = &x;  //auto -> int
    auto b = &x;  // auto -> int*
    auto & c = x;  // auto ->  int
    auto d = c;  // auto -> int
    const auto e = x;  // auto -> int
    auto f = e;  // auto -> const int 
    const auto& g = x;  // auto -> int
    auto& h = g;  // auto ->const int
    return 0;
}
