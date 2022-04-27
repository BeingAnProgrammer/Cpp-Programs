// This is a program to search a number in the array i.e, Linear search
#include <iostream>
using namespace std;

int main()
{
    int a[10], i,key,pos,flag=0;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a no for " << i << " position = ";
        cin >> a[i];
    }
cout<<"\nEnter a number to search = ";
cin>>key;

for ( i = 0; i < 10; i++)
{
    if (a[i]==key)
    {
        flag=flag+1;
        pos=i+1;
        break;
    }
    
}
if(flag==1)
cout<<"\n"<<key<<" Number found at "<<pos<<" Position"<<endl;
else
cout<<"\nThe number you are looking for is not found!!";

    return 0;
}