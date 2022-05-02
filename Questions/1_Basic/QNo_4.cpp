/* Write a program where the user is asked to enter two integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and dividend should be integers.)
*/

#include <iostream>
using namespace std;

int main()
{
    int divisor, dividend;

    cout << "Enter the value of divisor = ";
    cin >> divisor;
    cout << "Enter the value of dividend = ";
    cin >> dividend;

    int quotient, remainder;
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "\nThe value of quotient is: " << quotient;
    cout << "\nThe value of remainder is: " << remainder;

    return 0;
}