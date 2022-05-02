// Write a Program to Swap Two Numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\nEnter value of a = ";
    cin >> a;
    cout << "\nEnter value of b = ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "\nNew value of a = " << a;
    cout << "\nNew value of b = " << b;

    return 0;
}