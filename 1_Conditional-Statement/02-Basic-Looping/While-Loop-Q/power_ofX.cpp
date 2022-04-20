// this is a program to calculate the power of x^y using while loop
#include<iostream>
using namespace std;

int main()
{
    int x,y,i,pro=1;
    cout<<"enter the no's  to find x^y = ";
    cin>>x>>y;

    i=1;
    while (i<=y)
    {
        pro=pro*x;
        i++;
    }
    cout<<x<<"^"<<y<<" = "<<pro;

return 0;
}