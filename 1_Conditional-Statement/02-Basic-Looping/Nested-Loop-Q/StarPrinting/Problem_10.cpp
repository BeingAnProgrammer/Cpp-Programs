// to print
/* if Enter no of rows = 5
E
D E
C D E
B C D E
A B C D E    */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no of rows = ";
    cin >> n;
    int i = 1;
    int c = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + (n - 1) + (j - c);
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        c++;
    }
    return 0;
}
