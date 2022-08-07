#include <iostream>
using namespace std;


void cat1()
{
    string s;
    string s1;
    while(getline(cin, s1))
    {
        s += s1;
    }

    cout << s << endl;

}


void cat2()
{
    string s;
    string s1;
    while(cin >> s1)
    {
        s += s1;
    }

    cout << s << endl;

}
int main()
{
    //cat1();
    cat2();
    
    return 0;

}
