#include <iostream>
#include <vector>
using namespace std;

class LibraryItem
{
private:
    string title;
    int ID;

public:
    LibraryItem(string itemTitle, int itemID)
    {
        title = itemTitle;
        ID = itemID;
    }
    // Methods
    virtual void DisplayItem()
    {
        cout << "Book Title: " << title << endl;
        cout << "Book ID: " << ID << endl;
    }
};

class Books : public LibraryItem
{
private:
    string authorName;

public:
    Books(string itemTitle, int itemID, string name) : LibraryItem(itemTitle, itemID)
    {
        authorName = name;
    }
    // Overriding the function
    void DisplayItem() override
    {
        LibraryItem::DisplayItem();
        cout << "Author Name: " << authorName << endl;
    }
};

class Journals : public LibraryItem
{
private:
    int issueNumber;

public:
    Journals(string itemTitle, int itemID, string name, int issuenumber) : LibraryItem(itemTitle, itemID)
    {
        issueNumber = issuenumber;
    }
    void DisplayItem() override
    {
        LibraryItem ::DisplayItem();
        cout << "Issue Number: " << issueNumber << endl;
    }
};

class Library
{
private:
    vector<LibraryItem *> items;

public:
    void addItem(LibraryItem *item)
    {
        items.push_back(item);
    }
    void dispalyallItems()
    {
        for (LibraryItem *item : items)
        {
            item->DisplayItem();
            cout << endl;
        }
    }
};

int main()
{
    Library library;

    Books book1("Thinking in C++", 101, "Ahmedyar");
    Books book2("Automate Boring Stuff using python", 102, "Umar Malik");

    Journals journal_1("Vogue", 103, "Vogue Magzine", 10932);
    Journals journal_2("Rolling Stone", 104, "Rolling Magzine", 1009932);

    library.addItem(&book1);
    library.addItem(&book2);

    library.addItem(&journal_1);
    library.addItem(&journal_2);

    library.dispalyallItems();

    return 0;
}