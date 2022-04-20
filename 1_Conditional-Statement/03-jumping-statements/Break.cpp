/* Break statements is used to terminate irs block of its code {}
  for eg It can be used to "jump out" of a loops, switch statement etc. */

// example of Break Statement

#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while (i<=10)
    {
        cout<<"\n"<<i;
        if(i==5)
        break;
        i++;
    }
return 0;
}

/*this will give an output of 
 1
 2
 3
 4
 5   */

//  #include<iostream>
// using namespace std;

// int main()
// {
//     int i=1;
//     while (i<=10)
//     {
//         if(i==5)
//         break;
//         cout<<"\n"<<i;
//         i++;
//     }
// return 0;
// }
/* this will give an output like
 1
 2
 3
 4  */

// this output is diff form the above codes bcz it depends at which position you are using the goto statement