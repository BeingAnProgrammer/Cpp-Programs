// This is a program to find if the no is odd or even using class & object
#include <iostream>
using namespace std;

class oddeve
{
    int a;

public:
    void getdata();
    void putdata();
};

void oddeve::getdata()
{
    cout << "Enter a no to check if its odd or even = ";
    cin >> a;
}
void oddeve::putdata()
{
    if (a % 2 == 0)
        cout << "This is an Even no ";
    else
        cout << "Its an odd no ";
}
int main()
{
    oddeve aa;
    aa.getdata();
    aa.putdata();

    return 0;
}