typedef char *pstring;

int main()
{
    char a[] = "Hello";
    char b[] = "Word";
    const pstring pa = a;
    int c = pa;
    return 0;
}
