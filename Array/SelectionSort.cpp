// THis is a program to sort the array in ascending/desending order i.e, Selection Sort
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, j, x;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " Position = ";
        cin >> a[i];
    }
    for (i = 0; i < 9; i++)
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    cout << "\nThe array in ascending order is:";
    for (i = 0; i < 10; i++)
        cout << "\n"
             << a[i];

    return 0;
}