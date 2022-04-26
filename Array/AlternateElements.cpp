// This is a program to print alternate elements of an array
#include <iostream>
using namespace std;

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter an no for " << i << " Position = ";
        cin >> a[i];
    }
    for (i = 0; i < 10; i = i + 2)
        cout << a[i] << endl;

    return 0;
}