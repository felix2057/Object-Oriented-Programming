#include <iostream>
using namespace std;
template <class T>
class Test
{
private:
    int Tval;
public:
    static int count;
    Test()  {   count++;   }
};
 
template<class T>
int Test<T>::count = 0;
 
int main()
{
    Test<int> a;
    Test<int> b;
    Test<double> c;
    cout << Test<int>::count  ;
    cout << Test<double>::count ;
    return 0;
}