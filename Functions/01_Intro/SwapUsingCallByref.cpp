// This is a program to swap two numbers using call by reference in function
#include <iostream>
using namespace std;

void swapReferenceVar(int &a, int &b) // using the reference operator
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 8, y = 2;
    cout << "\nThe value of x and y is = " << x << " " << y;
    swapReferenceVar(x, y);

    cout << "\nThe value of x and y is = " << x << " " << y;

    return 0;
}