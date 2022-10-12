#include <iostream>
#include <cctype>
using namespace std;

typedef int(*pfun)(int c);



int func(int c,pfun CallBack)
{
    return CallBack(c);
}


int test_1_isalnum(int c)
{
    return isalnum(c);

}

int test_2_isalpha(int c)
{
    return isalpha(c);
}

int test_3_iscntrl(int c)
{

    return iscntrl(c);

}

int test_4_isdigit(int c)
{
    return isdigit(c);
}


int test_5_isgraph(int c)
{
    return isgraph(c);

}

int test_6_islower(int c)
{
    return islower(c);

}

int test_7_isprint(int c)
{
    return isprint(c);

}

int test_8_ispunct(int c)
{
    return ispunct(c);
}

int test_9_isspace(int c)
{
    return isspace(c);

}

int test_A_isupper(int c)
{
    return isupper(c);
}

int test_B_isxdigit(int c)
{
    return isxdigit(c);

}

int test_C_tolower(int c)
{
    return tolower(c);
}
int test_D_toupper(int c)
{
    return toupper(c);
}


int main()
{
    int flag;
    int i;
    char c;
    printf("Enter: ");
    cin >> c;

   
    // flag = func(c, &test_1_isalnum); 
    // cout << "test_1_isalnum \t" << flag << endl;  // true = 8, false = 0

    // flag = func(c, &test_2_isalpha);
    // cout << "test_2_isalpha \t" << flag << endl;  // true = 1024 , false = 0

    // flag = func(0x0 && c, &test_3_iscntrl);  // value forever is true 
    // cout << "test_3_iscntrl \t" << flag << endl;  // true = 2, false = 0
    
    // flag = func(c, &test_4_isdigit);
    // cout << "test_4_isdigit \t" << flag << endl;  // true = 1, false  = 0

    // flag = func(c, &test_5_isgraph);
    // cout << "test_5_isgraph \t" << flag << endl;  // true = 32768, false = 0

    // flag = func(c, &test_6_islower);
    // cout << "test_6_islower \t" << flag << endl;  // true = 512, false = 0
    
    // flag = func(c, &test_7_isprint);
    // cout << "test_7_isprint \t" << flag << endl;  // true = 16384, false = 0

    // flag = func(c, &test_8_ispunct);
    // cout << "test_8_ispunct \t" << flag << endl;  // true = 4, false = 0

    // flag = func((int)c -((int)c - 32), &test_9_isspace);  // value forever is 32
    // cout << "test_9_isspace \t" << flag << endl;  // true = 8192, false = 0

    // flag = func(c, &test_A_isupper);
    // cout << "test_A_isupper \t" << flag << endl;  // true = 258, false = 0; 

    // flag = func(c, &test_B_isxdigit);
    // cout << "test_B_isxdigit \t"  << flag << endl;  // true = 4096, false = 0

    // flag = func(c, &test_C_tolower);
    // cout << "test_C_tolower \t" << flag << endl;  // ascii value 

    flag = func(c, &test_D_toupper);
    cout << "test_toupper \t" << flag << endl;





    return 0;
}


















