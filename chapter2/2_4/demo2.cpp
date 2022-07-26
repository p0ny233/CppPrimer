
int i = 0x11;
const int a = i;

int main()
{
    int *pa = (int *)&a;
    *pa = 0x22;
    //int i = 0x11;
    
    //const int a = i;
    //a = 0x22;

    return 0;
}
