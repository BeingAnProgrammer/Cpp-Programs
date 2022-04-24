/* A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times. */

#include <iostream>
using namespace std;

void hellow()
{                                // return type, with name of the function
    cout << "Hi i am Nitesh!!!"; // function body
}

int main()
{
    hellow(); // calling function ,,, function name followed by ();

    return 0;
}


//a function can also be called multiple times as much you want


//note if a user defines a function , after int main() function then an ERROR will occure

//Howerer ,its possible to separate the declaration & defination of the function . like below

// #include <iostream>
// using namespace std;

// // Function declaration
// void myFunction();

// // The main method
// int main() {
//   myFunction();  // call the function
//   return 0;
// }

// // Function definition
// void myFunction() {
//   cout << "I just got executed!";
// }
