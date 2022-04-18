/*This is a program to find sum of even and product of odd using while loop

   for eg user gives   n=2345    then 
        
            even no = 2 and 4   ,   odd no = 3 and 5

            sum of even =2+4 =6   , product of odd = 3 * 5 = 15
*/

#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,pro=1,dig,save;
    cout<<"Enter a no = ";
    cin>>n;
    save=n;

    while (n>0)
    {
        dig=n%10;
        if(dig%2==0)
            sum=sum+dig;
        else
            pro=pro*dig;

        n=n/10;
    }
    cout<<"\nSum of even no of "<<save<<" = "<<sum;
    cout<<"\nProduct of odd no of "<<save<<" = "<<pro;

return 0;
}