// This is a program to print star in a reverse manner
/*

    *
   **
  ***
 ****
*****

*/
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int b = 1; b <= 5 - i; b++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << "\n";
    }

    return 0;
}