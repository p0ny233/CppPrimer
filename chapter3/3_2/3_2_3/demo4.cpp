#include <iostream>
#include <cctype>
using namespace std;

void test1()
{
    string str("Hello !! World !!!");
    for(auto& c : str)
    {
        if(ispunct(c))
            c = 'a';
    }

    cout << str << endl;
}


int main()
{
    test1();
    return 0;

}
