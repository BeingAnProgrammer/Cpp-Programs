// To find the factorial of a number using function 

#include<iostream>
using namespace std;



int factoral(int n)
{
    if(n<=1)
    return 1;

    return n * factoral(n-1);
}
int main()
{

    int a;
    cout<<"Enter a no to find its factoral = ";
    cin>>a;

    cout<<"The factorila of "<<a<<" is = "<<factoral(a);

return 0;
}