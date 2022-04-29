// This is a program to print Right diagonal matrix in 2D array
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;
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

    // this is the code to print Right diagonal element
    cout << "\nThe Right diagonal elements are:" << endl;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {

            if (i + j == 2)
                cout << a[i][j] << "\t";
        }

    return 0;
}