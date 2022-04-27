// This a program to print array in reverse order
#include <iostream>
using namespace std;

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " position = ";
        cin >> a[i];
    }
    cout << "\nArray elements in reverse order is = "<<endl;
    for (i = 9; i >= 0; i--)
        cout << a[i] << endl;

    return 0;
}