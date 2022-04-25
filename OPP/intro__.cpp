// C++ is an object-oriented programming language.
// Everything in C++ is associated with classes and objects, along with its attributes and methods.
// Attributes and methods are basically variables and functions that belongs to the class
//  A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

// #include <iostream>
// #include <string>
// using namespace std;

// class MyClass
// {                    // The class
// public:              // Access specifier
//     int myNum;       // Attribute (int variable)
//     string myString; // Attribute (string variable)
// };

// int main()
// {
//     MyClass myObj; // Create an object of MyClass

//     // Access attributes and set values
//     myObj.myNum = 15;
//     myObj.myString = "Hi i am nitesh";

//     // Print values
//     cout << myObj.myNum << "\n";
//     cout << myObj.myString;
//     return 0;
// }

// You can create multiple objects of one class:

#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "Tesla";
  carObj1.model = "X";
  carObj1.year = 2019;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}
