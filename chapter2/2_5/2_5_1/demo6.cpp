typedef char *pstring;

int main()
{
    char *c = "he";
    const pstring ps = 0;
    
    const pstring *cptr = &ps;
    cptr = c;
    return 0;
}
