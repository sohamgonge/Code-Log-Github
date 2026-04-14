#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        name = "Unknown";
        age = 0;
    }
    Person(string pname, int page)
    {
        name = pname;
        age = page;
    }
    ~Person()
    {
    }
    void setPersonDetails()
    {
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your age : ";
        cin >> age;
    }
    void displayPersonDetails()
    {
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

class Bank
{
private:
    double balance;

public:
    Bank()
    {
        balance = 0;
    }
    Bank(double pbalance)
    {
        balance = pbalance;
    }
    ~Bank() {}
    void deposit(float depamt)
    {
        if (depamt <= 0)
        {
            cout << endl;
            cout << "Error : enter a Deposit Amount greater than 0." << endl;
            return;
        }
        else
        {
            balance += depamt;
            cout << endl;
            cout << "Amount Deposited successfully." << endl;
            cout << "Current balance : " << balance << endl;
        }
    }
    void withdraw(float witamt)
    {
        if (witamt <= balance && witamt > 0)
        {
            balance -= witamt;
            cout << endl;
            cout << "Amount Successfully Withdrawed" << endl;
            cout << "Current balance : " << balance << endl;
        }
        else if (witamt > balance)
        {
            cout << endl;
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            cout << endl;
            cout << "Enter a valid amount for withdrawal (greater than 0)." << endl;
        }
    }
    void displayBalance()
    {
        cout << "Balance : " << balance << endl;
    }
};
class Account : public Person, public Bank
{
private:
    int accountNumber;

public:
    Account()
    {
        accountNumber = 0;
    }
    Account(string pname, int page, double pbalance, int paccno) : Person(pname, page), Bank(pbalance)
    {
        accountNumber = paccno;
    }
    ~Account() {}
    void setAccountDetails()
    {
        setPersonDetails();
        cout << "Enter your Ac/No. : ";
        cin >> accountNumber;
    }
    void displayAccountDetails()
    {
        displayPersonDetails();
        displayBalance();
        cout << "A/c No : " << accountNumber << endl;
    }
};

int main()
{
    Account ap1;
    ap1.displayAccountDetails();
    cout << endl;
    Account ap2("User", 18, 500, 101206);
    ap2.displayAccountDetails();
    cout << endl;
    Account ap3;
    ap3.setAccountDetails();
    ap3.deposit(1000);
    ap3.withdraw(500);
    ap3.displayBalance();
    ap3.displayAccountDetails();
    return 0;
}