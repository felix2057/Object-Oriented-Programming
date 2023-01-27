#include <iostream>
using namespace std;
//Parent Class 1
class sub{
    public:
    int i=10;
    int j=23;
friend class sub3;};
//Parent Class 2
class sub2{
    protected: 
    int m=10;
    int n=23;
};
//Friend class 1(sub 3)
class sub3{
public:
void print3(sub& x)
{cout<<x.i<<endl;
cout<<x.j<<endl;}};

//Derived class sub1 i.e inheritance
class sub1:public sub,private sub2
{public:
int k;
int l;
sub1()
{k=41;
l=50;}
void print2()
{cout<<i<<endl;
cout<<j<<endl;
cout<<k<<endl;
cout<<l<<endl;
cout<<m<<endl;   
cout<<n<<endl;
}    
};


int main()
{sub1 b;
b.print2();
sub3 a;
printf("\n");

    return 0;
}