/* This is a program to find the sum of digits of a given no using while loop 

  meaning    lets say user give a no n=237 
               then the output will be        2 + 3 + 7 = 12      */

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,dig;
    cout<<"Enter a no to find the sum of digits = ";
    cin>>n;
    dig=n;   //stored the value of n in dig so that i can use it to display at the no at the end

    while (n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"sum of digits of no "<<dig<<" = "<<sum;
    return 0;
}