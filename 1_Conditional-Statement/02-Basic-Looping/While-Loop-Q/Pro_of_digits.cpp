/* This is a program to find the pro of digits of a given no using while loop 

  meaning    lets say user give a no n=237 
               then the output will be        
                 2 x 3 x 7 = 42      */

#include<iostream>
using namespace std;
int main()
{
    int n,pro=1,dig;
    cout<<"Enter a no to find the product of its digits = ";
    cin>>n;
    dig=n;

    while (n>0)
    {
        pro=pro*(n%10);
        n=n/10;
    }
    cout<<"The product of digits of "<<dig<<" = "<<pro;
    return 0;
}