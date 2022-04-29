// This is a program to find the tramspose of a matrix
// This is program to add two matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;

    cout << "For 1st Matrix" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a number for " << i << "," << j << " position = ";
            cin >> a[i][j];
        }

    cout << "2D Matrix is " << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }

    cout << "\nTranspose of two Matrix is :";
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[j][i] << "\t";
    }

    return 0;
}