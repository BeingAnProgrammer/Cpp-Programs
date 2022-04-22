/*Fibonacci numbers, commonly denoted Fₙ, form a sequence, the Fibonacci sequence, in which
each number is the sum of the two preceding ones ,eg 0 1 1 2 3 5 8 13.........          */


/*this is a program to print fibonacci searies upto till N Terms .., using while loop
   eg if a user gives n=10 then it will print till 8 i.e,  0112358    */


#include<iostream>
using namespace std;

int main()
{
    int n,x,y,z,count=1;
    cout<<"Enter a no fibonacci series till N terms = ";
    cin>>n;
    
    x=0;
    y=1;
    z=0;
    while (count<=n)
    {
        cout<<"\n"<<z;
        x=y;
        y=z;
        z=x+y;
        count=count+1;
    }
    

return 0;
}