#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ---> data type which hold the address of other data types

    int a = 3;
    int *b = &a;
    // & ----> Address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // * ----> Address of operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int **c = &b;
    cout<<"The Address of b is "<<&b<<endl;
    cout<<"The Address of b is "<<c<<endl;
    cout<<"The Address of c is "<<&c<<endl;
    cout<<"The value at address *c is "<<*c<<endl;
    cout<<"The value of address **c is "<<**c<<endl;
    return 0;
}