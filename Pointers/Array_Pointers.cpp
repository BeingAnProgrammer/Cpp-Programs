// Pointees in arrays

#include <iostream>
using namespace std;

int main()
{
    int marks[] = {21, 42, 23, 26};      //an array 

    int *a = marks;                     //& is not nessary in array ,bcz "marks its self contains the address" 

    cout << "The value of marks[0] = " << *a << endl;
    cout << "The value of marks[1] = " << *(a + 1) << endl;
    cout << "The value of marks[2] = " << *(a + 2) << endl;
    cout << "The value of marks[3] = " << *(a + 3) << endl;

    cout << marks;        //prints the address

    return 0;
}

// output
// The value of marks[0] = 21
// The value of marks[1] = 42
// The value of marks[2] = 23
// The value of marks[3] = 26
// 0x61fefc