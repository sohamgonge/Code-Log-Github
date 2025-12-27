#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // const int a = 34;

    // cout<<"The value of a was : "<<a<<endl;

    // // a = 45; This is illegaln 

    // cout<<"the value of a is : "<<a<<endl;

    // *******Manipulators*******
    // int a= 3, b = 78, c =1233;
    // cout<<"the value of a is : "<<a<<endl;
    // cout<<"the value of b is : "<<b<<endl;
    // cout<<"the value of c is : "<<c<<endl;

    // cout<<"the value of a is : "<<setw(4)<<a<<endl;
    // cout<<"the value of b is : "<<setw(4)<<b<<endl;
    // cout<<"the value of c is : "<<setw(4)<<c<<endl;
    
    //**********************Operator Precedence******************
    int a = 3, b =4;
    // int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c<<endl;
    
    return 0;
}