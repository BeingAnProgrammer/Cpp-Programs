//  Write a Program to Find Size of int, float, double and char in your computer
#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    double c;
    char d;

    cout << "Size of int is = " << sizeof(a) << endl;
    cout << "Size of float is = " << sizeof(b) << endl;
    cout << "Size of double is = " << sizeof(c) << endl;
    cout << "Size of char is = " << sizeof(d) << endl;

    return 0;
}