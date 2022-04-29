// This is program to add two matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], i, j;

    cout << "For 1st Matrix" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a number for " << i << "," << j << " position = ";
            cin >> a[i][j];
        }

    cout << "For 2nd Matrix" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a number for " << i << "," << j << " position = ";
            cin >> b[i][j];
        }

    cout << "First Matrix is:" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }

    cout << "\nSecond Matrix is:" << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << b[i][j] << "\t";
    }

    //   Code for summing two matrix

    cout << "\nSum of two Matrix is :";
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] + b[i][j] << "\t";
    }

    return 0;
}