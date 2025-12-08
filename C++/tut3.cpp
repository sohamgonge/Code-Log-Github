#include <iostream>

using namespace std;
int glo = 6;//global variable
void sum(){
    int a;
    cout<<"\n"<<glo;
}
int main()
{
    int a = 4;
    int b = 5;
    float pi = 3.14;
    char c = 'd';
    int glo = 9;//local variable
    bool is_true = true;
    glo = 98;//updating local 
    cout<<"value of glo is : "<< glo<<"\n"<<is_true;
    sum();
    // cout << "\nThis is tutorial 3. \nHere the value of a is " << a << "\nThe value of b is " << b;
    // cout << "\nThe value of pi is :" << pi;
    // cout << "\nThe value of char c is :" << c;
    return 0;
}