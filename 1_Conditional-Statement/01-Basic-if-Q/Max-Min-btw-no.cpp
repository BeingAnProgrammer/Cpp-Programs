// This program tells which no is max/min btw to no 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"\nEnter 2 no to find Max btw them = ";
//     cin>>a>>b;
//     if(a>b)
//     cout<<a<<" is the Max no ";
//     else
//     cout<<b<<" is the Max no ";
//     return 0;
// }

#include<iostream>
using namespace std; 
int main()
{
    int a,b,c;
    cout<<"\nEnter 2 no to find Max = ";
    cin>>a>>b;
    
    c=a>b?a:b;      //Kya a>b haa agar ha too a print kar do varna b print kar do
    cout<<"\nThe Max no is = "<<c;
    return 0;
}