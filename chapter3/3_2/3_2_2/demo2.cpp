#include <iostream>
#include <string.h>
#include <stdio.h>
#define LOG(content) (printf("------------------\t %s\t----------------\n", content))
using namespace std;

int main()
{

    // 1、getline
    // cout << "getline ------------------" << endl;
    LOG("getline");
    string str;
    //cin >> str;
    getline(cin, str);
    cout << str << endl;

    // 2、s.empty()
    //cout << "s.empty()  ------------------" << endl;
    LOG("s.empty()");
    string s2;
    s2 = "Hello \n World";
    cout << s2.empty() << endl;
    s2 = "";
    cout << s2.empty() << endl;

    // 3、s.size()
    string s3 = "Hello World";
    //cout << "s.size()  --------------------" << endl;
    LOG("s.size()");
    cout << "s3.size() = " << s3.size() << endl; // if size == 11 ? strlen() :  sizeof()
    cout << "strlen(s3.c_str()) = " << strlen(s3.c_str()) << endl;

    return 0;
    
}
