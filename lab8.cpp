//Write a program to compare two string without using libraryfunction.
#include <iostream>
using namespace std;
  
int compare(char[],char[]);  
int main()  
{  
   char str1[20]; // declaration of char array  
   char str2[20]; // declaration of char array  
   cout<<"Enter the first string : ";  
   cin>>str1;  
   cout<<"Enter the second string : ";  
   cin>>str2;  
   int c= compare(str1,str2); // calling compare() function  
   if(c==0)  
   cout<<"strings are same";  
   else  
   cout<<"strings are not same";  
  
    return 0;  
}  
  
// Comparing both the strings.  
int compare(char a[],char b[])  
{  
    int flag=0,i=0;  // integer variables declaration  
    while(a[i]!='\0' &&b[i]!='\0')  // while loop  
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    return 0;  
    else  
    return 1;  
}  