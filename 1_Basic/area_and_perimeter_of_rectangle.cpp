// To find area and Perimeter of a rectangle
#include<iostream>
using namespace std;
int main()
{
    int l,b,area,perimeter;
    cout<<"Enter the value of length and breadth of rectangle : "<<endl;
    cin>>l>>b; 
    area=l*b;
    perimeter=2*(l+b);
    cout<<"Area of rectangle = "<<area<<endl<<"Perimeter of rectangle = "<<perimeter;
    return 0;
}