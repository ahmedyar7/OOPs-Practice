// Suppose you have a class Book with members title and author. Write a copy constructor for this class.

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    // Constructor
    Book(string bookTitle, string bookAuthor)
    {
        title = bookTitle;
        author = bookAuthor;
    }
    // Copy Constructor
    Book(const Book &obj1)
    {
        author = obj1.author;
        title = obj1.title;
    }
    // Print Function
    void print()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    Book object1("PhysicsBook", "AhmedYar");
    Book object2 = object1;

    // Calling function with object 1
    object1.print();
    // Calling function with object 2
    object2.print();
}

In a class Vector representing a mathematical vector with x and y components, implement a copy constructor.

#include <iostream>
                                                                              using namespace std;

class Vector
{
private:
    int x;
    int y;

public:
    Vector(int vec_x, int vec_y)
    {
        x = vec_x;
        y = vec_y;
    }
    // Copy Constructor
    Vector(const Vector &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    // Printing value
    void print()
    {
        cout << "Value of X: " << x << endl;
        cout << "Value of Y:" << y << endl;
    }
};

int main()
{
    Vector v1(10, 20);
    Vector v2 = v1;

    v1.print();
    v2.print();
}
