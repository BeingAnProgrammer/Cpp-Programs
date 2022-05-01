// This is a program to print Solid Rectangular star
/*

* * * * *
* * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}