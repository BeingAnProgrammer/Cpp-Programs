// this is a program to find the factorial of a given no using for loop
#include<iostream>
using namespace std;

int main()
{
    int n,fact,a;
    cout<<"Enter a no to find its factorial = ";
    cin>>n;
    
    a=n;
    for ( fact = 1; n>=1; n--)
    {
        fact=fact*n;
    }
    
    cout<<"Factorial of "<<a<<" = "<<fact;

return 0;
}