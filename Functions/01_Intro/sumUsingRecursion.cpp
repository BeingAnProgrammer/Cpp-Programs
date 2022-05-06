// This is program to find the sum of n natural no using recursion
#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
int main()
{
    int a;
    cout << "Enter a no = ";
    cin >> a;

    cout << sum(a);

    return 0;
}