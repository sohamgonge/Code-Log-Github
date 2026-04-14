#include <iostream>
using namespace std;

class BankAccount
{
private:
    int AccountNumber;
    string holderName;
protected:
    double balance;

public:
    BankAccount()
    {
        AccountNumber = 00000;
        holderName = "Unknown";
        balance = 0;
    }
    BankAccount(int pacno, string pname, double pbal)
    {
        AccountNumber = pacno;
        holderName = pname;
        balance = pbal;
    }
    ~BankAccount() {}
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
class SavingsAccount : public BankAccount
{
private:
    double interestRate;
    float time;
    double interest;

public:
    SavingsAccount()
    {
        interestRate = 0.03;
        time = 0;
        interest = 0;
    }
    SavingsAccount(int pacno, string pname, double pbalance, double prate) : BankAccount(pacno, pname, pbalance)
    {
        interestRate = prate;
    }
    ~SavingsAccount() {}
    void calculateInterest()
    {
        cout << "Enter time period : ";
        cin >> time;
        interest = balance * interestRate * time;
        cout << "Interest earned : " << interest << endl;
    }
};
class PremiumAccount : public SavingsAccount
{
private:
    float specialInterestRate;

public:
    PremiumAccount()
    {
        specialInterestRate = 0.04;
    }
    PremiumAccount(int pacno, string pname, double pbalance, double prate, float psprate)
        : SavingsAccount(pacno, pname, pbalance, prate)
    {
        specialInterestRate = psprate;
    }

    void specialBenefits()
    {
        cout << "Premium Benefits:" << endl;
        cout << "- Higher interest rate: " << specialInterestRate << endl;
        cout << "- Priority customer support" << endl;
        cout << "- Exclusive offers" << endl;
    }
};

int main()
{
    PremiumAccount acc(1001, "Soham", 5000, 0.03, 0.04);

    acc.deposit(2000);
    acc.withdraw(1500);
    acc.calculateInterest();
    acc.specialBenefits();
    acc.displayBalance();

    return 0;
}