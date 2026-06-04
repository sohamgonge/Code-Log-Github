#include <iostream>
using namespace std;

class Animal {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Dog : public Animal {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Dog d;

    Animal* ptr;
    ptr = &d;

    ptr->show();

    return 0;
}