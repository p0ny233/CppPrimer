#include <iostream>
int main()
{
    using std::cout;
    using std::endl;
    int number = 10;
    while(number)
    {
        cout << "number is " << number-- << endl;   
        
    }
    
    cout << "number is " << number << endl;   
    return 0;
}
