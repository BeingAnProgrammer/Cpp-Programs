// THis is a program to search an number in 2D array
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, x;
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
    cout << "\nEnter an number to search its element = ";
    cin >> x;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == x)
            {
                cout << "\nNumber found at element " << i << "," << j;
                return 0;
            }
        }

    cout << "\nNumber not found ";

    return 0;
}