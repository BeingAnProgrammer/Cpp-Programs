// This is an program to count odd and even numbers of an array
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, countodd = 0, counteven = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " position = ";
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            counteven = counteven + 1;
        else
            countodd = countodd + 1;
    }
    cout << "\nTotal even numbers are = " << counteven;
    cout << "\nTotal odd numbers are = " << countodd;

    return 0;
}