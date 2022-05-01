// This is a program to print a pyramid
/*

    *
   ***
  *****
 *******
*********

*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, b;
    for (i = 1; i <= 5; i++)
    {
        for (b = 1; b <= 5 - i; b++)
            cout << " ";

        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << "\n";
    }

    return 0;
}