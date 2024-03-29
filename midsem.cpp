// Create a class representing a bank account with attributes like account number, balance, owner name, etc. Implement methods for deposit, withdrawal, and displaying the account details.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     int accountNumber;
//     double balance;
//     string ownerName;

// public:
//     BankAccount(int accountNumber, double balance, string ownerName)
//     {
//         this->accountNumber = accountNumber;
//         this->balance = balance;
//         this->ownerName = ownerName;
//     }
//     // * Methods:

//     void displayDetails()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//         cout << "Account Owner: " << ownerName << endl;
//     }

//     void deposit(double amount)
//     {
//         balance += amount;
//         cout << "Updated Balance: " << balance << endl;
//     }
//     void withdrawl(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//             cout << "Updated Balance: " << balance << endl;
//         }
//         else
//         {
//             cout << "This transaction is not possible" << endl;
//         }
//     }
// };

// int main()
// {
//     BankAccount acc1(123, 1000.0, "Ahmed Yar");
//     acc1.displayDetails();

//     acc1.deposit(200.00);

//     acc1.withdrawl(100.00);
// }

// Design a class to represent a library book with attributes like title, author, ISBN, etc. Implement methods for checking out a book, returning a book, and displaying book details.

#include <iostream>
using namespace std;

class Library
{
private:
    string title;
    string author;
    int isbn;
    bool checkout;

public:
    Library(string title, string author, int isbn)
    {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->checkout = false;
    }

    // * Methods:

    void displayDetails()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book Author: " << author << endl;
        cout << "ISBN Number: " << isbn << endl;
    }

    void borrowed()
    {
        if (!checkout)
        {
            checkout = true;
            cout << "The book has been checked out " << endl;
        }
        else
            cout << "The book has not been checkedout " << endl;
    }

    void returned()
    {
        if (checkout)
        {
            checkout = false;
            cout << "The book has been returned " << endl;
        }
        else
        {
            cout << "The book has not been returned " << endl;
        }
    }
};

int main()
{
    Library l("Thinking C++", "Robert", 12314);
    l.displayDetails();
    l.borrowed();
    l.returned();
}