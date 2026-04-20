#include<iostream>
using namespace std;



int main()
{
    int correctCard = 1234;
    int balance = 500;
    int cardNumber{};
    int witamt{};

    cout << "Enter Card Number : ";
    cin >> cardNumber;

    try
    {
        if(cardNumber==correctCard){
            cout << "Enter withdrawal amount : ";
            cin >> witamt;
            if(witamt <= balance){
                balance -=witamt;
                cout << "Your balance is : " << balance ;
            }
            else{
                throw "Insufficient Balance";
            }
        }else{
            throw "Invalid Card Number";
        }
    }
    catch(char const* s)
    {
        cout << s << endl;
    }
    
    return 0;
}