//Write a program to reverse a string without using predefined function.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,n;
    string str = "ThisIsC++";
    n=str.length();
    for (i=0;i<n/2;i++)
    {
        swap(str[i],str[n-i-1]);
    }
    cout<<"After reversing string: "<<str;
    return 0;
}