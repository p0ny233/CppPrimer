#include <iostream>
using namespace std;

int main()
{
    string s;
    string s1 = s +  "abc" + "123"; //  equals (s + "abc" ) + "123"
    string s2 = "123" + "abc" + s;

    return 0;
}
