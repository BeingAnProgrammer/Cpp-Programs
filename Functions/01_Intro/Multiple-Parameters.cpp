// Multiple Parameters

// Inside the function, you can add as many parameters as you want:

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age)
{
    cout << fname << " kumar. " << age << " years old. \n";
}

int main()
{
    myFunction("Nitesh", 20);
    myFunction("Himanshu", 21);
    myFunction("Ankit", 30);
    return 0;
}

// Note that when you are working with multiple parameters, the function call
//  must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.