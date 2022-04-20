// this is a program to calculate the power of x^y using for loop
#include<iostream>
using namespace std;

int main()
{
    int x,y,i,pro=1;

    cout<<"Enter no's to find the x^y = ";
    cin>>x>>y;
    for ( i = 1; i <=y; i++)
    pro=pro*x;
    cout<<x<<"^"<<y<<" = "<<pro;
    

return 0;
}