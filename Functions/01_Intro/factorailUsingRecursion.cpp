// This is a program to find the factorial of a given no using recursion 
#include<iostream>
using namespace std;


int fact(int a)
{
    if(a<=0)
    return 1;
    else
    return a*fact(a-1);
}

int main()
{
    int b;
    cout<<"Enter an number = ";
    cin>>b;

    cout<<fact(b);
    

return 0;
}