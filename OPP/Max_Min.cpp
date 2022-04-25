// This is program to find which no is max and which is min
#include <iostream>
using namespace std;

class MaxMin
{
    int a, b;

public:
    void getdata();
    void putdata();
};
void MaxMin::getdata()
{
    cout << "Enter to numbers = ";
    cin >> a >> b;
}
void MaxMin::putdata()
{
    if (a > b)
        cout << a << " is greater !!";
    else
        cout << b << " is greater !!";
}

int main()
{
    MaxMin aa;
    aa.getdata();
    aa.putdata();
    return 0;
}