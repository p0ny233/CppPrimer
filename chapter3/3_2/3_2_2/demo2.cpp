#include <iostream>
#include <string.h>
#include <stdio.h>
#define LOG(content) (printf("------------------\t %s\t----------------\n", content))
using namespace std;

int main()
{

    // 1. getline
    // cout << "getline ------------------" << endl;
    LOG("getline");
    string str;
    //cin >> str;
    getline(cin, str);
    cout << str << endl;

    // 2. s.empty()
    //cout << "s.empty()  ------------------" << endl;
    LOG("s.empty()");
    string s2;
    s2 = "Hello \n World";
    cout << s2.empty() << endl;
    s2 = "";
    cout << s2.empty() << endl;

    // 3. s.size()
    string s3 = "Hello World";
    //cout << "s.size()  --------------------" << endl;
    LOG("s.size()");
    cout << "s3.size() = " << s3.size() << endl; // if size == 11 ? strlen() :  sizeof()
    cout << "strlen(s3.c_str()) = " << strlen(s3.c_str()) << endl;


    // 4. s[n]
    LOG("s[n]");
    string s4 = "Hello World";
    printf("%s\n", s4.c_str());
    printf("s[%d] = %c\n", 2, s4[2]);
    printf("s[%d] = %c\n", 4, s4[4]);


    // 5. s5 + s6
    LOG("s5+s6");
    string s5 = "Hello";
    string s6 = "World";
    cout << s5 + s6 << endl;

    // 6. s7 = s8
    LOG("s7 = s8");
    string s7 = "Hello12";
    string s8 = "World1";
    cout << "s7 = " << s7 << endl;
    cout << "s8 = " << s8 << endl;
    s7 = s8;

    cout << "s7 = " << s7 << endl;
    cout << "s8 = " << s8 << endl;

    // 7. s9 == s10
    LOG("s9 == s10");
    string s9 = "world";
    string s10 = "wrold";
    //printf("s9 == s10 = %d\n",  s9 == s10  ? 1 : 0 );
    cout << "s9 == s10 = " << (s9 == s10  ? 1 : 0)  << endl;


    return 0;
    
}
