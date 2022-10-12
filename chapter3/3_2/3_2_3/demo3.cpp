#include <iostream>
#include <cctype>

using namespace std;

void func()
{
    int count = 0;
    string str("Hello World!!!!!");
    for(char c : str)
    {
        if(ispunct(c))
            count++;
    }
    cout << count << endl;
}



int main()
{
    func();

}
