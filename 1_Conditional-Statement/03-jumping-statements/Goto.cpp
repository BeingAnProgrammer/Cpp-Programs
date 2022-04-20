/*The goto statement in C++ is an unconditional jump statement used for transferring the control of a
 program. It allows the program's execution flow to jump to a specified location within the function.
    syntax:    goto lable: */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a no = ";
    cin>>a;
    
    if(a%2==0)
    goto even;
    else
    goto odd;

    
    even:
    cout<<"\nThe no is even!! ";
    return 0;                   //here i used one more return bcz, if not used then odd: will also be executed
    odd:
    cout<<"\nThe no is odd!! ";
    return 0;
}