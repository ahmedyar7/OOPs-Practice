#include <iostream>
using namespace std;

class Increase
{
private:
    int value;

public:
    Increase()
    {
        value = 10;
    }
    void operator++()
    {
        value = value + 5;
    }
    void display()
    {
        cout << "value" << value << endl;
    }
};

int main()
{
    Increase inc;
    ++inc;
    inc.display();
    return 0;
}

binary operator overloading

#include <iostream>
    using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    void input()
    {
        cout << "Enter the real and imaginary part: ";
        cin >> real;
        cin >> img;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;

        return temp;
    }
    void output()
    {
        cout << "Output is: " << real << "+" << img << "i";
    }
};

int main()
{
    Complex com1, com2, result;
    cout << "Enter the first complex number: ";
    com1.input();
    cout << "Enter the second complex number: ";
    com2.input();

    result = com1 + com2;
    result.output();
    return 0;
}

#include <iostream>
using namespace std;

class Vector
{
private:
    int a;
    int b;

public:
    Vector(int A, int B)
    {
        a = A;
        b = B;
    }
    Vector operator+(Vector vec)
    {
        return Vector(a + vec.a, b + vec.b);
    }

    void display()
    {
        cout << a << "," << b << endl;
    }
};
int main()

{
    Vector v1(10, 20);
    Vector v2(1, 2);

    Vector result = v1 + v2;

    result.display();
}

#include <iostream>
using namespace std;

class Counter
{
    int count = 0;

public:
    // Constructor
    Counter(int my_count)
    {
        count = my_count;
    }
    // Operator overloading
    Counter operator++()
    {
        ++count;
    }
    void display()
    {
        cout << count << endl;
    }
};
int main()
{
    Counter c(1);
    for (int i = 0; i < 10; i++)
    {
        ++c;
        c.display();
    }
}

// 3.	Define a class named `Point` with two integer data members (`x` and `y`).
//    - Overload the stream insertion operator (`<<`) to print the coordinates of a point in the format `(x, y)`.
//    - Implement a method to display a point using the overloaded operator.

#include <iostream>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int my_x, int my_y)
    {
        x = my_x;
        y = my_y;
    }
    // we use friend because its not the part of the class

    friend ostream &operator<<(ostream &os, Point &point)
    {
        os << "(" << point.x << ", " << point.y << ")";
        return os;
    }

    void display()
    {
        cout << *this; // "<<" is now overloaded
        // *this operator points to the current istance of the class
        // * is used for the dereferencing.
    }
};
int main()
{
    Point p(2, 4);
    p.display();
}