#include <iostream>
int main()
{
    using std::cout;
    using std::endl;
    int flag = 50;
    int sum = 50;
    while(true)
    {
        sum += ++flag;
        if(flag == 100)
            break;
    }

    cout << "Sum is " << sum << endl;
    return 0;

}
