#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    /*
    string s1;
    s1 = "Hello";
    */
    
    string s1 = "Hello";
    string s2 = "Hellp";
    printf("strcmp(s1.c_str(), s2.c_str()) = %d\n" ,strcmp(s1.c_str(), s2.c_str()));

    string s3 = "hello";
    string s4 = "he";
    
    printf("strcmp(s3.c_str(), s4.c_str()) = %d\n" ,strcmp(s3.c_str(), s4.c_str()));  // 1

    printf("\n");


    return 0;

}

