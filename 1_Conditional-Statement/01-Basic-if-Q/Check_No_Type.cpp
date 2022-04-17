// This is a program to check a no is +ve , -ve OR Zero
#include<iostream>
using namespace std ;
int main()
{
    int a;
    cout<<"\nEnter a no to check its type =";
    cin>>a;
    if(a==0)
    cout<<"\nThe no is Zero";
    else if(a>0)
    cout<<"\nThe no is +ve number ";
    else
    cout<<"\nThe no is -ve number ";
    return 0;
}