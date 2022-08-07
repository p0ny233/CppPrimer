#include <iostream>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s))
    {
        if(!s.empty())
        {
            cout << s << endl;
        }
    }
    return 0;
}
