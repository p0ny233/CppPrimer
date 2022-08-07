#include <iostream>
using namespace std;

void compare_content(string s1, string s2)
{
    if(s1 == s2)
    {
        printf("s1 == s2\n");
        return;
    }
    
    cout << (s1 > s2 ? "s1 = " + s1 : "s2 = " + s2) << endl;
    return;
}


void compare_size(string s1, string s2)
{
    cout << (s1.size() > s2.size() ? "s1 = " + s1 : "s2 = " + s2) << endl;
}


int main()
{
    string s1;
    string s2;
    cout << "s1 = ";
    getline(cin, s1);
    cout << "s2 = ";
    getline(cin, s2);
    //compare_content(s1, s2);
    compare_size(s1, s2);
}
