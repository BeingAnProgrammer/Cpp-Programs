// This is a program to find max & min no of an array
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, max;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " Position = ";
        cin >> a[i];
    }

    max = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
cout<<"max no is = "<<max;
    return 0;
}