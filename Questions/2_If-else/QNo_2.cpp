// Write a Program to Check Whether a Character is Vowel or Consonant.

#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter a Character to Check Whether it is Vowel or Consonant = ";
    cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        cout << x << " is a vowel ";
    else
        cout << x << " is a consonant ";

    return 0;
}