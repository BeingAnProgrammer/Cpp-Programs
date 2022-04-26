#include <iostream>
using namespace std;

int main()
{
    int a[10], i, sum = 0, pro = 1;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " position = ";
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            sum = sum + a[i];
        else
            pro = pro * a[i];
    }

    cout << "\nSum of even numbers is = " << sum;
    cout << "\nProduct of odd numbers is = " << pro;

    return 0;
}