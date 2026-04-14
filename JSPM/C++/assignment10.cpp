#include <iostream>
using namespace std;

class Comp
{
private:
    int num;

public:
    Comp()
    {
        num = 8;
    }

    void operator++()
    {
        num += 2;
    }
    void operator--()
    {
        num -= 2;
    }
    void print()
    {
        cout << num << endl;
    }
};

int main()
{
    Comp cobb;
    cout << "Initial : ";
    cobb.print();
    ++cobb;
    cout << "After pre-increment : ";
    cobb.print();
    --cobb;
    cout << "After pre-decrement : ";
    cobb.print();
    return 0;
}