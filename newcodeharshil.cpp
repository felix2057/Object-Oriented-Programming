#include <iostream>
using namespace std;
class complex
{
    int real;
    int imag;

public:
    void printdata();
    complex()
    {
        cout << "Enter a and b where a + ib is the first complex number.";
        cout << "\na = ";
        cin >> real;
        cout << "b = ";
        cin >> imag;
    }
};
void complex::printdata()
{
    cout << "Complex numbers:\n " << real << " + " << imag << "i+1" << endl;
}
int main()
{
    complex a[10];
    int i;
    for (i = 0; i < 10; i++)
        a[i].printdata();
}