// You can also use a default parameter value, by using the equals sign (=).

// If we call the function without an argument, it uses the default value ("Norway"):

#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway")
{
    cout << country << "\n";
}

int main()
{
    myFunction("India");
    myFunction();
    myFunction("USA");
    return 0;
}

/*in simple words , if an argument is not passed then it will take the  default vlaue but , if its given
then it will take the user input        */