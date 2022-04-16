// 10% discount at a shop
#include<iostream>
using namespace std;
int main()
{
    float amt,dis;
    cout<<"Enter Total purchasing amount : "<<endl;
    cin>>amt;

    dis=(amt*10)/100;
    cout<<"Discount of 10% = "<<dis<<endl;
    cout<<"Total payable amount = "<<amt-dis;
    return 0;
}