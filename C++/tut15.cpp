#include<iostream>
using namespace std;
// function prototype
// type function-name(arguments);
// int sum(int a, int b); ---> acceptable
// int sum(int a, b); -- > not acceptable
int sum(int, int);// --> acceptable
void g(void);
int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number number"<<endl;
    cin>>num2;
    // num1 and num2  are actual parameters
    cout<<"The sum of num1 and num2 is "<<sum(num1,num2)<<endl;
    g();
    
    return 0;
}
int sum(int a, int b){
    // a and b will be taking values froma ctual parameter num1 and num2 hence called Formal Parameters
    int c = a+b;
    return c;

}

void g(){
    cout<<"Hello, good morning";
}