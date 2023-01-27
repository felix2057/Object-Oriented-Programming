//WAP to demonstrate the order of call of constructors and destructors in case of 
//multi- level inheritance.
#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A Constructor called"<<endl;
    }
    ~A(){
        cout<<"A Destructor called"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B Constructor called"<<endl;
    }
    ~B(){
        cout<<"B Destructor called"<<endl;
    }
};
class C:public A,public B{
    public:
    C(){
        cout<<"C Constructor called"<<endl;
    }
    ~C(){
        cout<<"C Destructor called"<<endl;
    }
};
class D: public C{
    public:
    D(){
        cout<<"D Constructor called"<<endl;
    }
    ~D(){
        cout<<"D Destructor called"<<endl;
    }
};
int Multiple(){
    C ob;
}
int Multilevel(){
    D ob1;
}
int main(){
    cout<<"Multiple"<<endl;
    Multiple();
    cout<<"Multilevel"<<endl;
    Multilevel();
}
