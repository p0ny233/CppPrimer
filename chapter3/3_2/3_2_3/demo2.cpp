#include <iostream>
using namespace std;

void func()
{
    string str("some string");
    for(auto s: str)
    {
        cout << s << endl;
    }
}

int main()
{
    func();


}
