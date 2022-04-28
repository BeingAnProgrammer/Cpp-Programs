// This is a program to count total no of odd and even terms in 2d array
#include <iostream>
using namespace std;

int main()
{
    int a[3][3], i, j, even = 0, odd = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            cout << "Enter a no for " << i << "," << j << " Position = ";
            cin >> a[i][j];
        }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0)
                even = even + 1;
            else
                odd = odd + 1;
        }
    cout << "Total even terms are = " << even << endl;
    cout << "Total odd terms are = " << odd << endl;

    return 0;
}