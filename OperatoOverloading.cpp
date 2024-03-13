// // #include <iostream>
// // using namespace std;

// // class Increase
// // {
// // private:
// //     int value;

// // public:
// //     Increase()
// //     {
// //         value = 10;
// //     }
// //     void operator++()
// //     {
// //         value = value + 5;
// //     }
// //     void display()
// //     {
// //         cout << "value" << value << endl;
// //     }
// // };

// int main()
// {
//     Increase inc;
//     ++inc;
//     inc.display();
//     return 0;
// }

// binary operator overloading

// #include <iostream>
//     using namespace std;

// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     void input()
//     {
//         cout << "Enter the real and imaginary part: ";
//         cin >> real;
//         cin >> img;
//     }

//     Complex operator+(Complex obj)
//     {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.img = img + obj.img;

//         return temp;
//     }
//     void output()
//     {
//         cout << "Output is: " << real << "+" << img << "i";
//     }
// };

// int main()
// {
//     Complex com1, com2, result;
//     cout << "Enter the first complex number: ";
//     com1.input();
//     cout << "Enter the second complex number: ";
//     com2.input();

//     result = com1 + com2;
//     result.output();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Vector
// {
// private:
//     int a;
//     int b;

// public:
//     Vector(int A, int B)
//     {
//         a = A;
//         b = B;
//     }
//     Vector operator+(Vector vec)
//     {
//         return Vector(a + vec.a, b + vec.b);
//     }

//     void display()
//     {
//         cout << a << "," << b << endl;
//     }
// };
// int main()

// {
//     Vector v1(10, 20);
//     Vector v2(1, 2);

//     Vector result = v1 + v2;

//     result.display();
// }

// #include <iostream>
// using namespace std;

// class Counter
// {
//     int count = 0;

// public:
//     // Constructor
//     Counter(int my_count)
//     {
//         count = my_count;
//     }
//     // Operator overloading
//     Counter operator++()
//     {
//         ++count;
//     }
//     void display()
//     {
//         cout << count << endl;
//     }
// };
// int main()
// {
//     Counter c(1);
//     for (int i = 0; i < 10; i++)
//     {
//         ++c;
//         c.display();
//     }
// }

// // 3.	Define a class named `Point` with two integer data members (`x` and `y`).
// //    - Overload the stream insertion operator (`<<`) to print the coordinates of a point in the format `(x, y)`.
// //    - Implement a method to display a point using the overloaded operator.

// #include <iostream>
// using namespace std;

// class Point
// {
// private:
//     int x;
//     int y;

// public:
//     Point(int my_x, int my_y)
//     {
//         x = my_x;
//         y = my_y;
//     }
//     // we use friend because its not the part of the class

//     friend ostream &operator<<(ostream &os, Point &point)
//     {
//         os << "(" << point.x << ", " << point.y << ")";
//         return os;
//     }

//     void display()
//     {
//         cout << *this; // "<<" is now overloaded
//         // *this operator points to the current istance of the class
//         // * is used for the dereferencing.
//     }
// };
// int main()
// {
//     Point p(2, 4);
//     p.display();
// }

// ----------------------------->>>>>> Practice of operator Overloading in CPP <<<<<-----------------------------

// Define a class ComplexNumber representing complex numbers with overloaded + and - operators for addition and subtraction respectively.

// #include <iostream>
// using namespace std;

// class Complex
// {
//     int real;
//     int img;

// public:
//     Complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
//     // Operator overloading (+)
//     Complex operator+(Complex complex)
//     {
//         Complex res(real + complex.real, img + complex.img);
//         return res;
//     }
//     // Operator overloading (-)
//     Complex operator-(Complex complex)
//     {
//         Complex res(real - complex.real, img - complex.img);
//         return res;
//     }

//     void display()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(10, 2);
//     Complex c2(20, 4);

//     Complex result_1 = c1 + c2;
//     Complex result_2 = c1 - c2;

//     result_1.display();
//     result_2.display();
// }

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int real, int img)
//     {
//         this->real = real;
//         this->img = img;
//     }
//     // Operator overloading(+)
//     Complex operator+(Complex obj)
//     {
//         Complex complex(real + obj.real, img + obj.img);
//         return complex;
//     }
//     // Operator Overloading(-)
//     Complex operator-(Complex obj)
//     {
//         Complex complex(real - obj.real, img - obj.img);
//         return complex;
//     }
//     void display()
//     {
//         cout << real << "+" << img << "i" << endl;
//     }
// };

// int main()
// {
//     Complex c1(10, 20);
//     Complex c2(20, 30);

//     Complex result = c1 + c2;
//     Complex result2 = c1 - c2;

//     result.display();
//     result2.display();
// }

// Implement a class Fraction to represent fractions with overloaded +, -, *, and / operators for arithmetic operations.

// #include <iostream>
// using namespace std;

// class Fraction
// {
// private:
//     int numerator;
//     int denominator;

// public:
//     Fraction(int a, int b)
//     {
//         numerator = a;
//         denominator = b;
//     }
//     // operator overloading (+)
//     Fraction operator+(Fraction obj)
//     {
//         int num = numerator * obj.denominator + obj.numerator * denominator;
//         int deno = denominator * obj.denominator;

//         return Fraction(num, denominator);
//     }

//     // operator overloading (-)
//     Fraction operator-(Fraction obj)
//     {
//         int num = numerator * obj.denominator - obj.numerator * denominator;
//         int deno = denominator * obj.denominator;

//         return Fraction(num, denominator);
//     }

//     // operator overloading (+)
//     Fraction operator*(Fraction obj)
//     {
//         int num = numerator * obj.numerator;
//         int deno = denominator * obj.denominator;

//         return Fraction(num, denominator);
//     }

//     void display()
//     {
//         cout << numerator << "/" << denominator << endl;
//     }
// };

// int main()
// {
//     Fraction f1(10, 2);
//     Fraction f2(2, 1);

//     Fraction res_1 = f1 + f2;
//     Fraction res_2 = f1 - f2;
//     Fraction res_3 = f1 * f2;

//     res_1.display();
//     res_2.display();
//     res_3.display();
// }

// #include <iostream>
// using namespace std;

// class Fraction
// {

// private:
//     int numerator;
//     int denominator;

// public:
//     Fraction(int a, int b)
//     {
//         numerator = a;
//         denominator = b;
//     }

//     Fraction operator+(Fraction obj)
//     {
//         int nume = numerator * obj.denominator + denominator * obj.numerator;
//         int deno = denominator * obj.denominator;
//         return Fraction(nume, deno);
//     }
//     Fraction operator-(Fraction obj)
//     {
//         int nume = numerator * obj.denominator - denominator * obj.numerator;
//         int deno = denominator * obj.denominator;
//         return Fraction(nume, deno);
//     }
//     Fraction operator/(Fraction obj)
//     {
//         int nume = numerator * obj.denominator;
//         int deno = denominator * obj.denominator;
//         return Fraction(nume, deno);
//     }
//     void display()
//     {
//         cout << numerator << "/" << denominator << endl;
//     }
// };

// int main()
// {
//     Fraction f1(10, 4);
//     Fraction f2(12, 3);

//     Fraction res = f1 + f2;
//     res.display();
// }

// Create a class String to represent strings and overload the + operator to concatenate two strings.

#include <iostream>
#include <string>
using namespace std;

class String
{
private:
    string a;

public:
    String(string a)
    {
        this->a = a;
    }
};