//Rewrite program lab29. using class template
//WAP to display data of two different types using function template with multiple arguments.
#include <iostream>
using namespace std;
template <class t, class u>
class disp{
    public:
    disp(t a,u b){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    disp<int,float> ob(4,4.7);
    //disp ob1(5.5,5.5);
}