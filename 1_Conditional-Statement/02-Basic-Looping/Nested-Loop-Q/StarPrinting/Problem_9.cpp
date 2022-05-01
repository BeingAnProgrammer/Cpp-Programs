// This is a program to print Inverted Full pyramid
/*

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

    
    for (int i = 5; i >= 1; i--)
    {
    
    for (int k = 5 - i; k > 0; k--)
        cout << " ";
    for (int j = i; j > 0; j--)
        cout << "* ";
        cout << endl;
    }
    return 0;
}