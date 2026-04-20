#include<iostream>
using namespace std;



int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    try
    {
        if(age>18){
            cout << "Your age is valid." << endl;
        }
        else{
        throw &age;
        }
    }
    catch(int e)
    {
        cout << "Access Denied." << endl;
        cout << "You age is " << e << " Which is below 18." << endl;
        // e = 19;
    }
    cout << "Your age is : " << age << endl;
    return 0;
}