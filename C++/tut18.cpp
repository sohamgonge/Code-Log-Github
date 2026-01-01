#include <iostream>
using namespace std;
long long int factorial (long long int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n *factorial(n-1);
}
int main()
{
    long long int n;
    // Factorial of a number:
    /*
    6! = 6*5*4*3*2*1 = 720
    0! = 1 by defination
    1! = 1 by defination
    n! = n * (n-1)!
    */
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<" is :"<<factorial(n)<<endl;
    return 0;
}