// This is a program to print in reverse order from 10 to 1
#include<iostream>
using namespace std; 
int main()
{
    int i;

    i=10;                  //initilization
    while(i>=1)            //condetion
    {
        cout<<i<<"\n";
        i=i-1;             //decrement    it can also be written as i--
    }
    return 0;
}

