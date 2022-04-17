// To print 1 to 10 using do-while Loop
//example of do while loop
#include<iostream>
using namespace std;
int main()
{
    int i;

    i=1;                 //initilization
    do
    {
        cout<<i<<"\n";
        i++;             //increment
    } while (i<=10);     //condition         do-while loop is also know as exit controll loop
                        //even if the condetion given is false the loop will still run onetime
    return 0;
}