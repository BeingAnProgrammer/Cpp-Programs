// To find the factorial of a number using function

#include <iostream>
using namespace std;

int factoral(int n)
{
    if (n <= 1)
        return 1;

    return n * factoral(n - 1);
}
// Step by step calculation of factorial
// factorial(4)=4*factorial(3);
// factorial(4)=4*3*factorial(2);
// factorial(4)=4*3*2*factorial(1);
// factorial(4)=4*3*2*1;
// factorial(4)=24;
int main()
{

    int a;
    cout << "Enter a no to find its factoral = ";
    cin >> a;

    cout << "The factorila of " << a << " is = " << factoral(a);

    return 0;
}