// This is a program to find the numbers in n position in a fibonacci series
#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n<2)
    return 1;

    return fibo(n-2) + fibo(n-1);   //In fibonacci sum of two no in preceding no is the sum of next no
}

int main()
{
    int a;
    cout<<"Enter a position to find the number = ";
    cin>>a;

    cout<<"\nThe term in fibonacci sequence at position "<<a<< " is = "<<fibo(a);

return 0;
}