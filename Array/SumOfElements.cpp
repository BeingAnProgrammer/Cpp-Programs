// This is a program to find the sum of array elements
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number for " << i << " position = ";
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
        sum = sum + a[i];

    cout << "The sum of array elements are = " << sum;

    return 0;
}