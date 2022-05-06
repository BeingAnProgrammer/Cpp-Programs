// This is a program to print hallow N no of times using recursion
#include <iostream>
using namespace std;

void printhallow(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << "Hellow"<<endl;
        printhallow(n - 1);
    }
}

int main()
{
    int a;
    cout << "Enter a no = ";
    cin >> a;

    printhallow(a);

    return 0;
}