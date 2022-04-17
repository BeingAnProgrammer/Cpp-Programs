// This is a program to check max btw 3 no
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 no to find max btw them = ";
    cin>>a>>b>>c;

    if((a>b) && (a>c))
    cout<<a<<" is the Max number";
    else if((b>a) && (b>c))
    cout<<b<<" is the Max number";
    else
    cout<<c<<" is the Max number";
    return 0;
}