//Write a program to compare two string using library function.
#include <iostream>  
#include <string.h>  
using namespace std;
int main()  
{  
   char str1[20];  // declaration of char array  
   char str2[20];  // declaration of char array  
   int value; // declaration of integer variable  
   cout<<"Enter the first string : ";  
   cin>>str1;  
   cout<<"Enter the second string : ";  
   cin>>str2;  
   // comparing both the strings using strcmp() function  
   value=strcmp(str1,str2);  
   if(value==0)  
   cout<<"strings are same";  
   else  
   cout<<"strings are not same";  
   return 0;  
}  