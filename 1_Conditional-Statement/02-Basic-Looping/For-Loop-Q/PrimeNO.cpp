// This is a program to check whether a no is prime or not, using for loop
#include <iostream>
using namespace std;

int main()
{
    int n, j, count = 0;
    cout << "Enter a no to check if its Prime no = ";
    cin >> n;

    for (j = 1; j <= n; j++)
    {
        if (n % j == 0)
            count = count + 1;
    }

    if (count == 2)
        cout << n << " is a prime no ";
    else
        cout << n << " is not a prime no!!";

    return 0;
}