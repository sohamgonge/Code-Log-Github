#include <iostream>
using namespace std;

// inline int product(int a, int b)
// {
//     return a * b;
// }
int product(int a, int b)
{
    static int c = 0;//This executes only once
    c= c+1;
    return a * b +c ;
}
// default arguments, keep your default arguments at the very end
int moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}
// int strlen(const char*p){

// }

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b";
    // cin >> a >> b;
    // cout << "The product of a and b is " << product(a, b) << endl;
    int money = 10000;
    cout<<"If you have ₹"<<money<<" in your bank account, you will receive ₹"<<moneyReceived(money)<<" after 1 year"<<endl;
    cout<<"For VIP : If you have ₹"<<money<<" in your bank account, you will receive ₹"<<moneyReceived(money, 1.10)<<" after 1 year"<<endl;

    return 0;
}