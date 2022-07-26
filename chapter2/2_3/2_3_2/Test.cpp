int a = 0x1;
int b = 0x2;

int main()
{
    const int &p = a;

    p = b;
    

    return 0;
}
