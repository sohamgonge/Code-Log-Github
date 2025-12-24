#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a : " << endl;
    // cin >> a;
    // cout << "Enter the value of b : " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is : " << c << endl;
    // cout << "the global c is " <<::c;
    // The global scope operator is used as :: to use global varible instead of local variable

    float d = 34.4f; // This number will show float when hovered
    float c = 34.4;  // This number will show double is hovered
    long double e = 34.4l;
    cout << "The vlaue of d is " << d << endl
         << "The value of e is " << e;
    return 0;
}