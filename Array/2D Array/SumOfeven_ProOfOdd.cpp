// This is a program to find sum of even and product of odd
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, sum = 0, pro = 1;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a no for " << i << "," << j << " Position = ";
            cin >> a[i][j];
        }

    cout << "\n2D Array is  ";
    for (i = 0; i < 3; i++)
    {
        cout << "\n";
        for (j = 0; j < 3; j++)
            cout << a[i][j] << "\t";
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
                sum = sum + a[i][j];
            else
                pro = pro * a[i][j];
        }
    cout << "\nSum of even no is = " << sum;
    cout << "\nProduct of odd no is = " << pro;

    return 0;
}