//iostream header file
// There are two types of header files
// 1. System header files: It come with the compiler 
#include<iostream>
// 2. User Header files : It is written by the programmer
// #include"this.h" --> This will produce an error if this.h is not present in the current directory

using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Assignment operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a --"<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    // Assignment Operators __> used to assign values to variables
    // int a = 3, b = 9;
    // char d = 'd'

    // Comparision operators 
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;

    // Logical Operators
    cout<<endl;
    cout<<endl;
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this a==b && a<b is : "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of this a==b ||  a<b is : "<<((a==b)||(a<b))<<endl;
    cout<<"The value of this (a==b) is : "<<(!(a==b))<<endl;
    return 0;
}