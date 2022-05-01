// A pointer is a variable that stores the memory address as its value.

// A pointer variable points to a data type (like int or string) of the same type, and
// is created with the * operator. The address of the variable you're working with is assigned to the pointer:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // A string variable
    string *ptr = &food;   // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";
    return 0;
}

// output
// Pizza
// 0x61fef0
// 0x61fef0

/*
Example explained
Create a pointer variable with the name "ptr", that points to a "string" variable, by using the asterisk sign * (string* ptr).
Note that the type of the pointer has to match the type of the variable you're working with.

Use the "&" operator to store the memory address of the variable called "food", and assign it to the pointer.

Now, "ptr" holds the value of "food's" memory address.

*/