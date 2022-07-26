
int get_size()
{
    return 0x11;
}


const int i = get_size();  // At the .data section   Read And Write
const int a = 0x22;  // At the .rdata section  Read-Only
int main()
{
    int *pi = 0x0;
    int *pa = 0x0;

    pi = (int *)&i;
    pa = (int *)&a;

    *pi = 0x111;  // normal
    *pa = 0x333;  // error
    
    return 0;
}
