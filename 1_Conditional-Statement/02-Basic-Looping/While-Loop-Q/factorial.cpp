// this is a program to find the factorial of a given no using while loop
#include<iostream>
using namespace std;

int main()
{
    int n,fact,a;
    cout<<"Enter a no to find its factorial = ";
    cin>>n;
    
    a=n;
    fact=1;
    while (n>=1)
    {
        fact=fact*n;
        n--;
    }
    cout<<"Factorial of "<<a<<" = "<<fact;

return 0;
}