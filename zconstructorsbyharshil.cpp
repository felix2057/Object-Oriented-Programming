
#include <iostream>

using namespace std;
class sub
{
    int *p;
public:
    int i;
    int j;

    sub() // Default Constructor
    {
        i = 10;
        j = 5;
    }
    sub(int a) // Parametirized Constructor
    {
        i = a;
    }

    sub(sub &n) // Copy Constructor
    {
        i = n.i;
        j = n.j;
    }
    sub()  // Dynamic Constructor
    {
        p=new int;//new int means malloc in C++
        *p=10;

    }
    ~sub() // Deconstructor
    {
        cout << "deconstructor executed" << endl;
    }
};

int main()
{
    sub a;
    cout << a.i << endl;
    int a1 = 100;
    sub b(a1);
    cout << b.i << endl;
    sub c(a);
    cout << c.i << endl;
    cout << c.j << endl;

    return 0;
}