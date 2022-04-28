// This a program to find the sum of elements of a 2D array
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, sum = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a no for " << i << "," << j << " Position = ";
            cin >> a[i][j];
        }
    cout << "\nYour 2D array is: ";
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum = sum + a[i][j];

    cout << "\nSum of elemenst are = " << sum;

    return 0;
}