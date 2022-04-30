/* program to print
 *
 **
 ***
 ****
 *****                 */

// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;
//     i=1;
//     while(i<=5)
//     {
//         j=1;
//         while(j<=i)
//         {
//             cout<<"*";
//             j++;
//         }
//         cout<<"\n";
//         i++;
//     }

// return 0;
// }

// using for loop
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
