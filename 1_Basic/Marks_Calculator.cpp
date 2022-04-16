// Students marks calculator
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,Total,Percentage;
    cout<<"\nEnter marks of Five subject : ";
    cin>>a>>b>>c>>d>>e;
    Total=a+b+c+d+e;
    cout<<"\nTotal marks out of 500 is = "<<Total;

    Percentage=(Total/500)*100;
    cout<<"\nTotal percentage = "<<Percentage;
    return 0;
}