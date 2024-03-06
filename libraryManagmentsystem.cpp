// #include <iostream>
// #include <vector>
// using namespace std;

// class LibraryItem
// {
// private:
//     string title;
//     int ID;

// public:
//     LibraryItem(string itemTitle, int itemID)
//     {
//         title = itemTitle;
//         ID = itemID;
//     }
//     // Methods
//     virtual void DisplayItem()
//     {
//         cout << "Book Title: " << title << endl;
//         cout << "Book ID: " << ID << endl;
//     }
// };

// class Books : public LibraryItem
// {
// private:
//     string authorName;

// public:
//     Books(string itemTitle, int itemID, string name) : LibraryItem(itemTitle, itemID)
//     {
//         authorName = name;
//     }
//     // Overriding the function
//     void DisplayItem() override
//     {
//         LibraryItem::DisplayItem();
//         cout << "Author Name: " << authorName << endl;
//     }
// };

// class Journals : public LibraryItem
// {
// private:
//     int issueNumber;

// public:
//     Journals(string itemTitle, int itemID, string name, int issuenumber) : LibraryItem(itemTitle, itemID)
//     {
//         issueNumber = issuenumber;
//     }
//     void DisplayItem() override
//     {
//         LibraryItem ::DisplayItem();
//         cout << "Issue Number: " << issueNumber << endl;
//     }
// };

// class Library
// {
// private:
//     vector<LibraryItem *> items;

// public:
//     void addItem(LibraryItem *item)
//     {
//         items.push_back(item);
//     }
//     void dispalyallItems()
//     {
//         for (LibraryItem *item : items)
//         {
//             item->DisplayItem();
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     Library library;

//     Books book1("Thinking in C++", 101, "Ahmedyar");
//     Books book2("Automate Boring Stuff using python", 102, "Umar Malik");

//     Journals journal_1("Vogue", 103, "Vogue Magzine", 10932);
//     Journals journal_2("Rolling Stone", 104, "Rolling Magzine", 1009932);

//     library.addItem(&book1);
//     library.addItem(&book2);

//     library.addItem(&journal_1);
//     library.addItem(&journal_2);

//     library.dispalyallItems();

//     return 0;
// }

//
// Library Management System

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book
{
private:
    string name;
    string title;
    string author;
    int isbn;
    bool avaliable;

public:
    // Constructor:
    Book(string name, string title, string author, int isbn, bool avaliable)
    {
        this->name = name;
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->avaliable = avaliable;
    }

    // Getters
    string getName() { return name; }
    string getTitle() { return title; }
    string getAuthor() { return author; }
    int getISBN() { return isbn; }
    bool isAvaliable() { return avaliable; }

    // Setters
    bool setAvalibility(bool avail) { avail = avaliable; }
};

class Library
{

private:
    vector<Book> books;

public:
    void AddBooks(Book book)
    {
        books.push_back(book);
    }

    void DisplayBooks() // Displaying info of books
    {
        cout << "Avaliable Books: " << endl;
        for (auto book : books)
        {
            if (book.isAvaliable())
            {
                book.setAvalibility(true);
                cout << "Name: " << book.getName() << endl;
                cout << "Title: " << book.getTitle() << endl;
                cout << "Author: " << book.getAuthor() << endl;
                cout << "ISBN: " << book.getISBN() << endl;

                cout << endl;
            }
        }
    }

    void BorrowBook(int isbn) // For borrowing books
    {
        for (auto book : books)
        {
            if (book.getISBN() == isbn)
            {
                if (book.isAvaliable())
                {
                    book.setAvalibility(false);
                    cout << "Book " << book.getName() << " has been borrowed" << endl;
                }
                else
                    cout << "Book " << book.getName() << " has already borrowed " << endl;
            }
        }
    }

    void ReturnBook(int isbn)
    {
        for (auto book : books)
        {
            if (book.getISBN() == isbn)
            {
                if (!book.isAvaliable())
                {
                    book.setAvalibility(true);
                    cout << "Book " << book.getTitle() << " has been returned " << endl;
                }
                else
                    cout << "Book " << book.getName() << " has not been returned" << endl;
            }
        }
    }
};

int main()
{
    Book b1("12 Rules For Life", "Self Help", "Jordan Peterson", 123, true);
    Book b2("12 More Rules For Life", "Self Help", "Jordan Peterson", 1234, true);
    Book b3("How To win Friends and influence People", "Self Help", "Dale Carnegie", 3, false);

    Library lib;

    lib.AddBooks(b1);
    lib.AddBooks(b2);
    lib.AddBooks(b3);

    lib.BorrowBook(123);

    lib.DisplayBooks();
}