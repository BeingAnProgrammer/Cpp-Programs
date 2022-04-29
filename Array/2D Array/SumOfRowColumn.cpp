// This is a program to find sum of Row & Column in 2D matrix
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, sum;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a number for " << i << "," << j << " position = ";
            cin >> a[i][j];
        }
    cout << "\n2D array is:";

    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }

    cout << "\n__Sum of Rows__";
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum = sum + a[i][j];
        cout << "\nSum of row " << i + 1 << " = " << sum;
    }

    cout << "\n__Sum of Column__";
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
            sum = sum + a[j][i];
        cout << "\nSum of Column " << i + 1 << " = " << sum;
    }

    return 0;
}