// This is program to reverse a given number
//eg n=2375 then output will be n=5732
#include<iostream>
using namespace std;

class reverse
{
    int n;
    public:
    void getdata();
    void putdata();
};
void reverse::getdata()
{
    cout<<"Enter a no to reverse it = ";
    cin>>n;
}
void reverse::putdata()
{
    int rev=0;
    while (n>0)
    {
        rev=(rev*10)+n%10;
        n=n/10;
    }
    cout<<"\nReverse = "<<rev;
}

int main()
{
    reverse aa;
    aa.getdata();
    aa.putdata();

return 0;
}