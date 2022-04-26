// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

/*To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the
 number of elements it should store:

  string cars[4];

*/

/*To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

To create an array of three integers, you could write:

int myNum[3] = {10, 20, 30};           */

// Access the Elements of an Array
/*You access an array element by referring to the index number inside square brackets [].

This statement accesses the value of the first element in cars: */

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
//     cout << cars[0];
//     return 0;
// }

// Change an Array Element
// To change the value of a specific element, refer to the index number:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Tesla";
    cout << cars[0];
    return 0;
}
