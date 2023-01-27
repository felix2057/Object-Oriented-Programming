// create a class which stores, name, roll_no & total marks for a student. Input data for a student
// display it
#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    int total_marks;
};
int main()
{
    student student;
    cout << "Enter the name of the student: " << endl;
    cin >> student.name;
    cout << "Enter the roll_no: " << endl;
    cin >> student.roll_no;
    cout << "Enter total marks: " << endl;
    cin >> student.total_marks;

    cout << "Name of student: " << student.name << endl
         << "Roll No. of the student: "
         << student.roll_no << endl
         << "Total marks of the student: " << student.total_marks;
}