#include <iostream>
#include <vector>
using namespace std;

class Account
{
private:
    int account_number;
    string account_holder;
    double balance;

public:
    Account(int account_number, string account_holder, double balance)
    {
        this->account_number = account_number;
        this->account_holder = account_holder;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " Successfully!" << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            balance -= amount;
            cout << "WithDrawl $" << amount << " Successfully" << endl;
        }
    }

    void display()
    {
        cout << "Account Number " << account_number << endl;
        cout << "Holder Name " << account_holder << endl;
        cout << "Total Balance:  $" << balance << endl;
    }
};