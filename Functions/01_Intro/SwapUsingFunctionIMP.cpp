// This is a program to swap two numbers using function
// THis is important

//------------------X-X-X--WRONG MEATHOD--X-X-X-----------------------
// #include <iostream>
// using namespace std;

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int x = 8, y = 2;

//     cout << "\nThe value of x and y are = " << x << " " << y;

//     swap(x, y);
//     // after swap
//     cout << "\nThe value of x and y are = " << x << " " << y;

//     return 0;
// }

// -----------------X-X-X--CORRECT MEATHOD--X-X-X------------------------
// IN the correct meathod we use pointers ,bcz of using address of variables to swap the numbers
#include <iostream>
using namespace std;

// Call by reference using pointers

void swap(int *a, int *b)   //using pointers
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 8, y = 2;
    cout << "\nThe value of x and y is = " << x << " " << y;
    swap(&x, &y);

    cout << "\nThe value of x and y is = " << x << " " << y;

    return 0;
}