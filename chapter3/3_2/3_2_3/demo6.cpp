#include <iostream>
#include <cctype>

using namespace std;

void test1(string &s)
{
    for(decltype(s.size()) index = 0; index < s.size(); index++)
    {
        //auto &c = s[index];
        char *c = &s[index];
        int a = 1;
    }

    return;
}

int main()
{
    string str("Hello");

    test1(str);
    return 0;

}
