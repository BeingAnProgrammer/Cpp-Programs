// This is a program to accept and display an array
#include <iostream>
using namespace std;

int main()
{
    int a[10], i;
    for (i = 0; i <= 9; i++)
    {
        cout << "Enter a no for " << i << " position = ";
        cin >> a[i];
    }

    cout << "\nArray elements are : " << endl;
    for (i = 0; i <= 9; i++)
        cout << a[i]<<endl;

    return 0;
}