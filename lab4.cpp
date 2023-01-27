// Write a program to add two matrix of size 2x3.
// User have to input the values of Matrices and add bot he matrix
#include <iostream>
using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(i = 0; i < 2; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < 2; ++i)
       for(j = 0; j < 3; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 3; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 3; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == 3 - 1)
                cout << endl;
        }

    return 0;
}