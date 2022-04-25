// This a program to print n natural no is reverse order from n to 1
#include <iostream>
using namespace std;

class myclass
{
    int n;

public:
    void getdata();
    void putdata();
};
void myclass::getdata()
{
    cout << "Enter an no = ";
    cin >> n;
}
void myclass::putdata()
{
    for (; n >= 1; n--)
    {
        cout << "\n"
             << n;
    }
}
int main()
{
    myclass aa;
    aa.getdata();
    aa.putdata();

    return 0;
}