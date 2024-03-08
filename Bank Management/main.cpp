#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string name;
    int id;
    double balance;

public:
    Account(string name, int id, double balance)
    {
        this->name = name;
        this->id = id;
        this->balance = balance;
    }
    // Methods

    void display_details()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Balance: $" << balance << endl;

        cout << endl;
    }

    virtual double calculate_intrest_rate()
    {
        return 0.0;
    }
};

class Saving : public Account
{
private:
    double intrest_rate;

public:
    Saving(string name, int id, double balance, double intrest_rate) : Account(name, id, balance)
    {
        this->intrest_rate = intrest_rate;
    }
    // override the funciton
    double calculate_intrest_rate() override
    {
        Account::calculate_intrest_rate();
        return balance * (intrest_rate / 100);
    }
};

class Current : public Account
{
private:
    double overdraft_limit;

public:
    Current(string name, int id, double balance, double overdraft_limit) : Account(name, id, balance)
    {
        this->overdraft_limit = overdraft_limit;
    }
    // override the function
    double calculate_intrest_rate() override
    {
        Account::calculate_intrest_rate();
        if (balance < 0)
            return -balance * 0.05;

        else
            return 0.0;
    }
};

class Fixed : public Account
{
private:
    int term;
    double maturity_amount;

public:
    Fixed(string name, int id, double balance, int term, double maturity_amount) : Account(name, id, balance)
    {
        this->term = term;
        this->maturity_amount = maturity_amount;
    }
};

int main()
{
    // Creating the objects
    Account account("Ahmed Yar", 1, 100.00);
    Saving saving("M.Umar Malik", 3, 200.00, 20.00);
    Current current("M.Asjad Kashif", 2, 1000.00, 2.0);
    Fixed fixed("Ayaan Hassan Khan", 4, 2000.00, 2, 200.00);

    // Showing the details of each objects
    account.display_details();
    cout << "Intrest Rate: $" << account.calculate_intrest_rate() << endl;
    cout << endl;

    saving.display_details();
    cout << "Intrest Rate: $" << saving.calculate_intrest_rate() << endl;
    cout << endl;

    current.display_details();
    cout << "Intrest Rate: $" << current.calculate_intrest_rate() << endl;
    cout << endl;

    fixed.display_details();
    cout << "Intrest Rate: $" << fixed.calculate_intrest_rate() << endl;
    cout << endl;
}
