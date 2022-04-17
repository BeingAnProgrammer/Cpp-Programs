//to find sum of N natural no using While Loop 

/*  Meaning lets say user gives        n=5 then
    to find the sum from 1 to 5  i.e, 1+2+3+4+5 = 15    */

#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;

    cout<<"Enter a no = ";
    cin>>n;
    
    i=1;      //initilization
    while (i<=n)
    {
        sum=sum+i;
        i++;

    }
    cout<<"\nSum = "<<sum;
    return 0;
    
}