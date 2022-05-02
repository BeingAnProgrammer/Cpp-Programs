// Write a Program to Find ASCII Value of a Character
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character = ";
    cin >> a;

    for (int i = 65; i <= 90; i++)
    {
        if (a == i)
            cout << i;
    }

    for (int j = 97; j <= 122; j++)
    {
        if (a == j)
            cout << j;
    }

    return 0;
}