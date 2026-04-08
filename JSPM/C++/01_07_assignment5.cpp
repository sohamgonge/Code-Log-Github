#include <iostream>
using namespace std;
class B;

class A
{
private:
    int numA;

public:
    A()
    {
        numA = 5;
    }

    friend void display(A &aobj, B &bobj);
    friend void add(A &aobj, B &bobj);
    friend class B;
};

class B
{
private:
    int numB;

public:
    B()
    {
        numB = 5;
    }

    void show(A &obj)
    {
        cout << "numA : " << obj.numA << endl;
    }
    friend void display(A &aobj, B &bobj)
    {
        cout << "numA : " << aobj.numA << endl;
        cout << "numB : " << bobj.numB << endl;
    }
    friend void add(A &aobj, B &bobj)
    {
        cout << "Sum : " << aobj.numA + bobj.numB << endl;
    }
};

int main()
{
    A a;
    B b;

    display(a, b);
    b.show(a);
    add(a, b);

    return 0;
}