#include <iostream>
using namespace std;

class BankAccount
{
protected:
    string accoutHolder;
    float balance;

public:
    BankAccount()
    {
        accoutHolder = "Unknown";
        balance = 0.0f;
    }
    BankAccount(string name, float bal)
    {
        accoutHolder = name;
        balance = bal;
    }
    void showBalance()
    {
        cout << accoutHolder << " current balance is : " << balance << endl;
    }

protected:
    void updateBalance(float amount)
    {
        balance += amount;
    }
};

class Transaction : public BankAccount
{
public:
    Transaction()
    {
    }
    Transaction(string name, float bal) : BankAccount(name, bal)
    {
    }
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
};

int main()
{
    Transaction t("User", 500);
    t.showBalance();
    t.deposit(500);
    t.withdraw(300);
    t.withdraw(1500);
    t.deposit(-1);
    t.withdraw(-5);
    t.showBalance();
    return 0;
}