// #include <iostream>
// using namespace std;

// class Complex;
// class Caluculator
// {
// public:
//     int add(int a, int b)
//     {
//         return a + b;
//     }
//     int sumComplex(Complex &o1, Complex &o2)
//     {
//         return (o1.a + o2.a);
//     }
// };

// class Complex
// {
// private:
//     int a;
//     int b;

// public:
//     friend Calucuator;
//     Complex(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }
//     void printNumber()
//     {
//         cout << a << "+" << b << "i" << endl;
//     }
// };

// int main()
// {
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Friend;

// class data
// {
// private:
//     string name;
//     int age;
//     friend class Friend;

// public:
//     data(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout << name << endl;
//         cout << age << endl;
//     }
// };
// class Friend
// {
// public:
//     void accessPrivateData(data &d)
//     {
//         d.display();
//     }
// };

// int main()
// {
//     data d("Ahmed", 23);
//     Friend f;
//     f.accessPrivateData(d);
// }

// Create a class called Rectangle with private members length and width. Implement a friend class called Calculator that calculates the area and perimeter of the rectangle.

// #include <iostream>
// using namespace std;

// class Calculator;

// class Rectangle
// {
// private:
//     int length;
//     int width;

//     friend class Calculator;

// public:
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
// };

// class Calculator
// {
// public:
//     int area(Rectangle &r)
//     {
//         int res = (r.length * r.width);
//         cout << "Area: " << res << endl;
//     }
//     int perimeter(Rectangle &r)
//     {
//         int res = (r.length + r.width);
//         cout << "Perimeter: " << res << endl;
//     }
// };
// int main()
// {

//     int length = 2;
//     int width = 2;

//     Rectangle r(length, width);
//     Calculator c;
//     c.area(r);
//     c.perimeter(r);
// }

// #include <iostream>
// using namespace std;

// class Calculator;

// class Complex
// {
// private:
//     int real;
//     int img;
//     friend class Calculator;

// public:
//     Complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
// };

// class Calculator
// {
// public:
//     int addreal(Complex &c1, Complex &c2)
//     {
//         int result = c1.real + c2.real;
//         return result;
//     }
//     int addimg(Complex &c1, Complex &c2)
//     {
//         int result = c1.img + c2.img;
//         return result;
//     }
// };

// int main()
// {
//     class Complex c1(12, 12);
//     class Complex c2(2, 2);

//     class Calculator res;
//     int result_1 = res.addreal(c1, c2);
//     int result_2 = res.addimg(c1, c2);

//     cout << result_1 << "+" << result_2 << "i" << endl;
// }

// Design a class Triangle with private members side1, side2, and side3. Implement a friend class TriangleProperties to determine whether the triangle is equilateral, isosceles, or scalene

#include <iostream>
using namespace std;
class TriangleProperties;
class Triangle
{
private:
    int s1;
    int s2;
    int s3;
    friend class TriangleProperties;

public:
    Triangle(int s1, int s2, int s3)
    {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }
};

class TriangleProperties
{
public:
    void determineType(Triangle &t)
    {
        if (t.s1 == t.s2 && t.s2 == t.s3)
        {
            cout << "Equliatrail Triangle" << endl;
        }
        else if (t.s1 == t.s2 || t.s3 == t.s3 || t.s2 == t.s3)
        {
            cout << "Isoselesce Triangle" << endl;
        }
        else
            cout << "Scalene Triangle" << endl;
    }
};

int main()
{
    Triangle side1(2, 1, 2);
    TriangleProperties tt;

    tt.determineType(side1);
}