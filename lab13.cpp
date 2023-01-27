// Modify the program ii) to store marks in 5 subjects. Calculate the total marks and percentage of
// student and display it
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    int marks[5];
    int total_marks;
    int percentage;
};
int main(){
    int i;
    student student;
    cout << "Enter the name of the student: " << endl;
    cin >> student.name;
    cout << "Enter the roll_no: " << endl;
    cin >> student.roll_no;
    cout << "Enter the marks obtained in 5 subjects" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the marks in sub "<<i+1<< endl;
        cin >> student.marks[i];
    }
    student.total_marks = 0;
    for (int i = 0; i < 5; i++)
    {
        student.total_marks += student.marks[i];
    }

    cout << "Name of student: " << student.name << endl
         << "Roll No. of the student: "
         << student.roll_no << endl
         << "Total marks of the student: " << student.total_marks << endl;
    student.percentage = (student.total_marks / 5);
    cout << "Total Percentage of student: " << student.percentage << endl;
}