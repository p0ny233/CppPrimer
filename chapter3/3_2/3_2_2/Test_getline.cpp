#include <iostream>
using namespace std;

void getlineOutput_1()
{

    string s1;
    while(getline(cin,s1))
    {
        //cout << s1 << endl;
        cout << s1 << "ttttt";
    }
}

void getlineOutput_2()
{
    cout << cin << endl;
    string s1;
    cout << getline(cin,s1);
}

int main()
{
    // getlineOutput_1();
    getlineOutput_2();
}
