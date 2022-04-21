// This is a program to calculate table of a given no , using while loop
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a no to calculate its table = ";
    cin >> n;
    i = 1;
    while (i <= 10)
    {
        cout << n << " X " << i << " = " << i * n << endl;
        i++;
    }

    return 0;
}