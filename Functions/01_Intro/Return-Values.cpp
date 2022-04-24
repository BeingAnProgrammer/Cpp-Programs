// The void keyword, used in the previous examples, indicates that the function should not return a value.
/* If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of
void, "and use the return keyword inside the function:"   */

#include <iostream>
using namespace std;

int myFunction(int x)
{
    return 5 + x;
}

int main()
{
    cout << myFunction(3);
    return 0;
}//when ever we use return in function , you have to use cout<< to call function



// You can also store the result in a variable:

// #include <iostream>
// using namespace std;

// int myFunction(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     int z = myFunction(5, 3);
//     cout << z;
//     return 0;
// }
