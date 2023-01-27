//Create a class which stores id, name, age and basic salary of an employee. Input data for 
//n number of employees. Calculate the gross salary of all the employees and display it 
//along with all other details in a tabular form.
//  [Gross salary= Basic salary + DA + HRA, 
//  DA = 80% of Basic salary HRA=10% 
//  of Basic salary
#include <iostream>
using namespace std;
class employee
{   public:
    int id;
    char name[50];
    float age;
    float bs;
    float gs;
};
int main()
{
    int n;
    float da, hra;
    cout<<"Enter number of employee : ";
    cin>>n;
    class employee s[n];
    class employee *emp;
    emp = &s[0];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter id of employee : ";
        cin>>(emp + i)->id;
        cout<<"Enter name of employee : ";
        cin>>(emp + i)->name;
        cout<<"Enter age of employee : ";
        cin>>(emp + i)->age;
        cout<<"Enter gross salary of employee : ";
        cin>>(emp + i)->bs;
        da = 0.8 * ((emp + i)->bs);
        hra = 0.1 * ((emp + i)->bs);
        (emp + i)->gs = (emp + i)->bs + da + hra;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Employee\t"<< i + 1;
        cout<<"\tId :\t"<< (emp + i)->id;
        cout<<"\tName :\t"<< (emp + i)->name;
        cout<<"\tAge :\t"<< (emp + i)->age;
        cout<<"\tBasic Salary :\t"<<(emp + i)->bs;
        cout<<"\tGross Salary :\t"<< (emp + i)->gs;
        cout<<"\n";
    }
    return 0;
}
