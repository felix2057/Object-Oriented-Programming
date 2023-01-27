// Create a class complex which stores real and imaginary part of a complex number. Input
// 10 complex numbers and display them.
#include <iostream>

using namespace std;

class complex
{

public:
    int real, img;
    void getDetails(void);
    void printDetails()
    {cout << "Complex numbers:\n "<<real << " + " <<img << "i"<<endl;}
};
void complex::getDetails(void)
{
    
    

        cout << "Enter a and b where a + ib is the first complex number.";

        cout << "\na = ";

        cin >>real;

        cout << "b = ";

        cin >> img;
}   
    
int main()
{int i;
    complex a1;
    for(i=0;i<10;i++){
    a1.getDetails();
    
    a1.printDetails();}


}