#include <iostream>
int main()
{
    int cnt = 0;
    int currVal = 0;
    int val = 0;

    if(std::cin >> currVal)
    {
        cnt = 1;
        while(std::cin >> val)
        {
            if(val == currVal)
            {
                cnt++;
            }
            else
            {
                std::cout << currVal << "\t" << cnt << std::endl;
                cnt = 1;
                currVal = val;
            }
        }
        std::cout << currVal << "\t" << cnt << std::endl;
        return 0;

    }
}
