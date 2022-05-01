// Modify the Pointer Value
// You can also change the pointer's value. But note that this will also change the value of the original variable:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string *ptr = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer
    cout << *ptr << "\n";

    // Output the new value of the food variable
    cout << food << "\n";
    return 0;
}

// output
// Pizza
// 0x61fef0
// Pizza
// Hamburger
// Hamburger