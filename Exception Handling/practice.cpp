#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <vector>
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

class QuestionPractice
{
public:
    void fileHandling()
    {
        string fileName;
        cout << "Enter the FileName: " << endl;
        cin >> fileName;

        try
        {
            ifstream file(fileName);
            if (!file.is_open())
                throw invalid_argument("This file Donot exsit");
            else
            {
                string contents;
                while (getline(file, contents))
                {
                    cout << contents;
                }
            }
        }
        catch (const exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }

    void dynamicMemoryAllocation()
    {
        int *arr = nullptr;
        int size;

        cout << "Enter the size of array: " << endl;
        cin >> size;

        try
        {
            arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                arr[i] = 1 * 2;
            }
            cout << "Array Allocation was successfull" << endl;

            // Accessing the element;
            cout << "Enter the index: ";
            int index;
            cin >> index;
            if (index < 0 || index > size)
            {
                throw out_of_range("The array was out of range");
            }
            else
                cout << "Element at index: " << index << arr[index] << endl;
        }
        catch (const bad_alloc &e)
        {
            cout << "Error: " << e.what();
        }
        catch (const out_of_range &e2)
        {
            cout << "Error: " << e2.what();
        }
        catch (const exception &e3)
        {
            cout << "Error: " << e3.what();
        }

        delete[] arr;
    }

    void dynamicMemory()
    {
        cout << "Enter the size of Array: ";
        int size;
        try
        {
            if (cin.fail())
            {
                throw invalid_argument("Please enter a number");
            }
            else
                cin >> size;
        }
        catch (const invalid_argument &e)
        {
            cout << "Error: " << e.what() << endl;
        }

        try
        {
            int *array = new int[size];
            for (int i = 0; i < size; i++)
            {
                array[i] = 1 * 2;
            }
            cout << "The Allocation was successfull " << endl;

            cout << "Enter the index: " << endl;
            int index;
            cin >> index;
            if (index >= size || index < 0)
            {
                throw out_of_range("This is out of range");
            }
            else
            {
                cout << array[index] << endl;
            }
        }
        catch (const out_of_range &e3)
        {
            cout << "Error: " << e3.what() << endl;
        }
        catch (const bad_alloc &e2)
        {
            cout << "Error: " << e2.what() << endl;
        }
        catch (const exception &e)
        {
            cout << "Error: " << e.what();
        }
    }
};

class Book
{
private:
public:
    string title, author, ISBN;
    double price;
    int quantity;
    Book(string title, string author, string ISBN, double price, int quantity)
    {
        if (price < 0)
        {
            throw invalid_argument("The price could not be negitive");
        }

        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
        this->price = price;
        this->quantity = quantity;
    }

    // #Method:
    void displayInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
    void sell(int quantity)
    {
        if (quantity > this->quantity)
        {
            throw runtime_error("Insuffient Stock");
        }
        else
        {
            this->quantity -= quantity;
        }
    }
};

class BookStore
{
private:
    vector<Book> inventory;

public:
    void addBook(const Book &book)
    {
        for (auto b : inventory)
        {
            if (b.ISBN == book.ISBN)
            {
                throw runtime_error("This Book Alread Exist\n");
            }
        }
        inventory.push_back(book);
    }

    Book searchBook(const string &ISBN)
    {
        for (const auto &book : inventory)
        {
            if (book.ISBN == ISBN)
            {
                return book;
            }
        }
    }
};