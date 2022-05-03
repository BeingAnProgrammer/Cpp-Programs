// Write a Program to Find Largest Number Among Three Numbers entered by users
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers = ";
    cin >> a >> b >> c;

    int x, y;

    x = a > b ? a : b;
    y = c > x ? c : x;

    cout << "The Max amoung the three no is = " << y;

    return 0;
}