// This is a program to find the frequency of a given number
#include <iostream>
using namespace std;

int main()
{
    int a[10], i, freq, count = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " Position = ";
        cin >> a[i];
    }
    cout << "\nEnter a no to find frequency of a no = ";
    cin >> freq;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == freq)
            count = count + 1;
    }
    cout << "\nFrequency of " << freq << " is = " << count;

    return 0;
}