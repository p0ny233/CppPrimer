typedef char *pstring;

int main()
{
    char a[] = "Hello";

    const pstring pa = a;
    const pstring *cpa = pa;
    return 0;
}
