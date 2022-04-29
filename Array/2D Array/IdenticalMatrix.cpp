// This is a program to check if a matrix id identical or not
// This is program to add two matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], b[3][3], i, j, flag = 0;

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

    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            if (a[i][j] != b[i][j])
                flag = 1;
    }
    if (flag == 0)
        cout << "\nThe matrix is identical";
    else
        cout << "\nThe matrix is not identical!!!";
    return 0;
}