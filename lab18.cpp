//Create a class which stores employee name,id and salary Derive two classes from
//‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. 
//The ‘Part-Time’ class stores the number of hours and pay per hour. 
//Calculate the salary of a regular employee and a par-time employee.
#include <iostream>
using namespace std;
class emp{
    public: 
    string name;
    int id;
    float salary;
    void input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter salary: ";
        cin>>salary;
    }
};
class regular : public emp{
    float da;
    float hra;
    float bs;
    public:
    void r(){
        cout<<"Regular"<<endl;
        input();
        bs = salary;
        hra = 0.2*salary;
        da = 0.1*salary;
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<(bs+hra+da)<<endl;
    }
};
class parttime: public emp{
    int hr;
    float sal;
    public:
    void p(){
        cout<<"Parttime"<<endl;
        input();
        sal = salary;
        cout<<"Enter hrs of work: ";
        cin>>hr;
        cout<<"Name: "<<name<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<sal*hr<<endl;
    }
};
int main(){
    regular h;
    h.r();
    parttime i;
    i.p();
}