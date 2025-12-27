#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // ******************Global and Local Scope variables*******************
    // int a, b, c;
    // cout << "Enter the value of a : " << endl;
    // cin >> a;
    // cout << "Enter the value of b : " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is : " << c << endl;
    // cout << "the global c is " <<::c;
    // The global scope operator is used as :: to use global varible instead of local variable
    
    // ****************** Float, double and long double Literals*******************
    // float d = 34.4f; // This number will show float when hovered
    // float c = 34.4;  // This number will show double is hovered
    // long double e = 34.4l;
    // cout << "The vlaue of d is " << d << endl
    //      << "The value of e is " << e;

    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;

    // ******************** Refernce Variable ********************
    // Shubham --> Shubh--> Monty -->Dangerous Coder
    // float x = 443;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y;
    //***********************Type Casing*******************
    int a = 45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    int c = (int)b;

    cout<<"The expression is"<<a+ b <<endl;
    cout<<"The expression is"<<a+ int(b) <<endl;
    cout<<"The expression is"<<a+ (int)b <<endl;
    return 0;
}