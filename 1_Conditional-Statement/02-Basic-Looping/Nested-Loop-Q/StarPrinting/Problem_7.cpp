// This is a program to print Hollow Rectangular star
/*

* * * * *
*       *
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
            if ((i == 2 && j == 2) || (i == 2 && j == 3) || (i == 2 && j == 4))
            {
                cout << " ";
                continue;
            }

            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}