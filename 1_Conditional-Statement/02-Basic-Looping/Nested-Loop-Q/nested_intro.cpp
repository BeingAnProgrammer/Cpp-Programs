/*when there is a loop inside another loop, then this is called the concept of
  nested loop  ,like for
while----> nested while loop
for------> nested for loop   */

//using nested while loop
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    i=1;
    while(i<=3)
    {
        j=1;
        while (j<=3)
        {
            cout<<"\n"<<j;
            j++;
        }
        i++;
    }

return 0;
}


//now same example but using for loop
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j;
//     for ( i = 1; i <=3; i++)
//     for ( j = 1; j <=3; j++)
//     cout<<"\n"<<j;
    
// return 0;
// }

/*this both codes will have same output i.e,
1
2
3
1
2
3
1
2
3    */