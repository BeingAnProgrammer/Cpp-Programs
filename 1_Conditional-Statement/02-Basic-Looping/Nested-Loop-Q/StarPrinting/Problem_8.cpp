// This is a program to print Inverted Half pyramid
/*

* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;
       for ( i = 1; i <= 5; i++)

    {
        for (j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}