#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string name;
    double balance;

public:
    BankAccount(const string &accountNumber, const string &name, double balance)
    {
        // Exception Hanling:
        if (balance < 0.0)
            throw runtime_error("Initial balance cannot be negitive");

        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        // Exception Handling
        if (amount < 0.0)
            throw runtime_error("The deposit Cannot be in negitive");

        balance += amount;
        cout << "Amount Deposited: " << amount << endl;
    }

    void withDraw(double amount)
    {
        // Exception Handling
        if (amount < 0.0)
            throw runtime_error("WithDrawal Amount cannot be negitive");

        if (amount <= balance)
        {
            balance -= amount;
            cout << "The Amount withdrawl: " << amount << endl;
        }
        else
            throw runtime_error("The Trasaction is not possible\n");
    }
};

int main()
{
    try
    {

        BankAccount bankAccount("121", "Ahmed", -0.1);

        bankAccount.deposit(-90.00);
    }
    catch (const exception &e)
    {
        cout << "Error: " << e.what();
    }
}