#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
// this will not swap a and b
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference Variables(tut7)
int &swapReference(int &a, int &b)
{ // type is reference variable
    int temp = a;
    a = b;
    b = temp;
    return a;
} // this is a reference to x
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 2, y = 3;
    cout << "The sum of 4 and 5 is " << sum(4, 5) << endl;
    cout << "The value of x is " << x << " and the value of y is " << y << " before swap" << endl;
    // swap(x,y);This will not swap
    // swappointer(&x,&y);//This will swap using pointer variables
    swapReferenceVar(x, y); // This will swap using reference variables
    // swapReference(x,y)=766;//This will swap using reference variables and make the reference variable a which is x as 766
    cout << "The value of x is " << x << " and the value of y is " << y << " after swap" << endl;
    return 0;
}