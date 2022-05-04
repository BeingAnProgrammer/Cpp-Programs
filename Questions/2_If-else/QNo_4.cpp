/* Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots
(both real and complex roots depending upon the discriminant).   */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter the cofficients of the quadratic equation = ";
    cin>>a>>b>>c;

    float discriminant, realpart,imgpart;
        float root1,root2;


    discriminant= (b*b) - (4*a*c);

    if(discriminant>0)
    {
        
        root1= (-b + sqrt(discriminant))/(2*a);
        root2= (-b - sqrt(discriminant))/(2*a);

        cout<<"\nThe roots are real and different "<<endl;
        cout<<root1<<" "<<root2;
    }
    
    else if(discriminant == 0)
    {
        root1=-b/2*a;
        root2=root1;

        cout<<"Roots are real and equal = "<<root1;

    }

    else
    {
        // when discriminant < 0
        realpart=-b/(2*a);
        imgpart=sqrt(-discriminant)/(2*a);
        cout<<"The roots is imaginaryPart and complex "<<endl;
        cout<<"Real part = "<<realpart<<" "<<"Imaginary Part = "<<" +"<<imgpart<<endl;
        cout<<"Real part = "<<realpart<<" "<<"Imaginary Part = "<<" -"<<imgpart<<endl;

    }


return 0;
}