#include <iostream>
using namespace std;

class Sum
{
public:
    void setdata()
    {
        a = 10;
        b = 20;
    }
    void display()
    {
        summation = a + b;
        cout << "Sum of a and b is : " << summation << endl;
    }

public:
    int a{}, b{}, summation{};
};
int main()
{
    Sum sobj;
    sobj.setdata();
    sobj.display();

    cout << "Value of a : " << sobj.a << endl;
    cout << "Value of b : " << sobj.b << endl;
    return 0;
}