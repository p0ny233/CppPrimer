int main()
{
    const int ci = 1024;
    int &r = (int &)ci;
    r = 42;  // error, Read-Only
    return 0; 
 
}
