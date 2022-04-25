// This a program to print till N natutal numbers
#include<iostream>
using namespace std;
 
class myclass
{
    int n;
    public:
    void getdata();
    void putdata();
};

void myclass::getdata()
{
    cout<<"Enter a no till you want to print = ";
    cin>>n;

}
void myclass::putdata()
{
    for(int i =1;i<=n;i++)
    cout<<i<<endl;
}
int main()
{
    myclass aa;
    aa.getdata();
    aa.putdata();

return 0;
}