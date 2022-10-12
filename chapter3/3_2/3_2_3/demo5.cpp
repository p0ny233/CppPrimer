#include <iostream>
#include <cctype>
using namespace std;

void strToUpper(string &s)
{
    for(auto &c : s)
    {
        c = toupper(c);
    }

}

int main()
{
    string s = "hello world";
    strToUpper(s);
    cout << s << endl;
    return 0;
}
