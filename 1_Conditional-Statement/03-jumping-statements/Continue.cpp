/*The continue statement breaks one iteration (in the loop), if a specified condition occurs,
 and continues with the next iteration in the loop.  */

#include<iostream>
using namespace std;

int main()
{
    int i=0;
    while (i<10)
    {
        i++;
        if(i==5)
        continue;    //here what continue does is,its gonna skip the next line and go back to the loop starting point if the condetion becomes true
        cout<<"\n"<<i;
    }
    

return 0;
}

/* output is gonna be (5 is missing)
 1
 2
 3
 4
 6
 7
 8
 9 
 10  */