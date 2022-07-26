#include <iostream>
#include <string>
using std::string;

int main()
{
    string s1;  // empty string
    
    string s2 = s1;  //  string s2(s1);
    
    string s3 = "Hello";  // string s3("Hello");
    
    string s4(10, 'c');  // s4 = cccccccccc
    
    int size = s3.size();
    return 0;



}
