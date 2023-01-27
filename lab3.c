// WAP to enter id, name, age and basic salary of n number of employees. Calculate the
// gross salary of all the employees and display it along with all other details in a tabular
// form, using pointer to structure.
//  [Gross salary= Basic salary + DA + HRA,
//   DA = 80% of Basic salary
//   HRA=10% of Basic salary]
#include <stdio.h>
struct employee
{
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
    printf("Enter number of employee : ");
    scanf("%d", &n);
    struct employee s[n];
    struct employee *emp;
    emp = &s[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter id of employee : ");
        scanf("%d", &(emp + i)->id);//a
        printf("Enter name of employee : ");
        scanf(" %[^\n]", (emp + i)->name);
        printf("Enter age of employee : ");
        scanf("%f", &(emp + i)->age);
        printf("Enter gross salary of employee : ");
        scanf("%f", &(emp + i)->bs);
        da = 0.8 * ((emp + i)->bs);
        hra = 0.1 * ((emp + i)->bs);
        (emp + i)->gs = (emp + i)->bs + da + hra;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\t", i + 1);
        printf("Id : %d\t", (emp + i)->id);
        printf("Name : %s\t", (emp + i)->name);
        printf("Age : %0.2f\t", (emp + i)->age);
        printf("Basic Salary : %0.2f\t", (emp + i)->bs);
        printf("Gross Salary : %0.2f\t", (emp + i)->gs);
        printf("\n");
    }
    return 0;
}