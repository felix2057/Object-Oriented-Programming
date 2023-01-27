//	WAP to demonstrate the order of call of constructors and destructors in case of multiple 
//inheritance
#include <iostream>
using namespace std;
class A{
    public:
    int a = 10;
};
class B{
    public:
    int b = 20;
};
class C: public A,public B{
    public:
    int c = 30;
    void out(){
        cout<<a<<" "<<b<<endl;
    }
};
class D:public C{
    public:
    void multilevel(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main(){
    C ob;
    ob.out();
    D ob2;
    ob2.multilevel();
}