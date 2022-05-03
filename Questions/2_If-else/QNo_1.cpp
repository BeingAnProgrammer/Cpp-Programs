// Write a Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a no to check if its even or odd = ";
    cin >> a;

    if (a % 2 == 0)
        cout << a << " is a even number!!";
    else
        cout << a << " is odd number!!";

    return 0;
}