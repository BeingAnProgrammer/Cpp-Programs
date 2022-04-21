// This is a program to calculate table of a given no , using for loop
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a no to calculate its table = ";
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n << " X " << i << " = " << i * n << endl;
    }

    return 0;
}