// This is a program to print n natural no fron 1 to N
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter value of N =";   //user enters till where he wants to print the no
    cin>>n;

    i=1;                          //initilization
    while(i<=n)                   //condetion
    {
        cout<<i<<"\n";           
        i++;                      //increment
    }  
    return 0;
}

