/*This is program to find reverse of a given no using for loop
   eg is user gives n=2345 then output will be  5432  */
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, save;
    cout << "Enter a no to reverse it = ";
    cin >> n;
    save = n;

    for (; n > 0; n = n / 10)
    {
        rev = rev * 10 + n % 10;
    }

    cout << "\nReverse of " << save << " = " << rev;

    return 0;
}