
// Information can be passed to functions as a parameter. Parameters act as variables inside the function.

// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want,
//  just separate them with a comma:

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname)
{
    cout << fname << " Kumar\n";
}

int main()
{
    myFunction("Nitesh");   // argument
    myFunction("Himanshu"); // argument
    myFunction("Ankit");    // argument
    return 0;
}

/*When a parameter is passed to the function, it is called an argument. So, from the example above:
 fname is a parameter, while Liam, Jenny and Anja are arguments.    */
