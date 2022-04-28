// This is simple program to accept and display no in 2D array
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a no for " << i << "," << j << " Position = ";
            cin >> a[i][j];
        }
    cout << "The 2D array is: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n"; 
    }

    return 0;
}