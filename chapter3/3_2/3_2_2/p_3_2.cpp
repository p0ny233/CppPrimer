#include <iostream>
using namespace std;

void readLine()
{
    string s;

    while(getline(cin, s))
    {
        if(!s.empty())
        {
            cout << s << endl;
        }
    }

}

void readWord()
{
    string s;
    while(cin >> s)
    {
        cout << s << endl;
    }
    return;
}
int main()
{
   // readLine();
    readWord();
}
