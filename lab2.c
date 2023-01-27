//WAP to input name, roll number and marks in 5 subjects for n number of students.
// Write functions to:-
//a. Find total marks and percentage of all n students.
//b. Display details of a student with a given roll number.
//c. Display the details for all the students having percentage in a given range.
//d. Sort the array in ascending order of marks.
#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int roll;
    int marks[5];
    int sum;
    float percentage;
};

void totalmarks(struct student x[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            x[i].sum=x[i].sum+x[i].marks[j];
        }
        x[i].percentage=x[i].sum/5;
    }
    for(int i=0;i<n;i++){
    printf("\nTotal Marks of Student %d: %d",i+1,x[i].sum);
    printf("\nPercentage of Student %d: %0.2f",i+1,x[i].percentage);
    }
}
void details(struct student x[], int n, int a){
    for(int i=0;i<n;i++){
        if(a==x[i].roll){
            printf("\nName of Student %d: %s",i+1, x[i].name);
            printf("\nRoll No: %d",x[i].roll);
            printf("\nTotal Marks: %d",x[i].sum);
            printf("\nPercentage: %.2f",x[i].percentage);
        }
    }
}

void sort(struct student x[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(x[j].sum>x[j+1].sum){
                struct student temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
            printf("\n\nName of Student %d: %s",i+1,x[i].name);
            printf("\nRoll of Student %d: %d",i+1,x[i].roll);
            printf("\nTotal Marks of Student %d: %d",i+1,x[i].sum);
            printf("\nPercentage of Student %d: %.2f",i+1,x[i].percentage);
        }
}

void range(struct student x[],int n, int r1, int r2){
    for(int i=0;i<n;i++){
        if(x[i].percentage>r1 && x[i].percentage<r2){
            printf("\nName of Student %d: %s",i+1,x[i].name);
            printf("\nRoll of Student %d: %d",i+1,x[i].roll);
            printf("\nTotal Marks of Student %d: %d",i+1,x[i].sum);
            printf("\nPercentage of Student %d: %.2f",i+1,x[i].percentage);
        }
    }
}

int main()
{
    int n,a,r1,r2;
    printf("enter number of students: ");
    scanf("%d",&n);
    struct student x[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of the student\n");
        scanf("%s",x[i].name);
        printf("Enter roll number \n");
        scanf("%d",&x[i].roll);
        printf("Enter subject marks out of 100 \n");
        for(int j=0;j<5;j++)
        {
            scanf("%d",&x[i].marks[j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("The name of the student is %s\n",x[i].name);
        printf("The students roll number is %d\n",x[i].roll);
        printf("The students marks in 5 subjects are: \n");
        for(int j=0;j<5;j++)
        {
            printf("Mark in subject %d is %d\n",j+1,x[i].marks[j]);
        }
    }
    totalmarks(x,n);
    printf("\n enter roll of student for details: ");
    scanf("%d",&a);
    details(x,n,a);
    sort(x,n);
    printf("Find details within a range\n");
    printf("enter starting point: ");
    scanf("%d",&r1);
    printf("\nenter ending point: ");
    scanf("%d",&r2);
    printf("\n\n");
    range(x,n,r1,r2);
    return 0;
}