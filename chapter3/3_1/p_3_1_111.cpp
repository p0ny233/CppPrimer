#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << endl;
    if(v1 > v2)
    {
    
        while(v1 >= v2)
        {
            cout << v2++ << endl;
        }
    }else
    {
        while(v2 >= v1)
        {
            cout << v1++ << endl;
        }
    }

    return 0;
}
