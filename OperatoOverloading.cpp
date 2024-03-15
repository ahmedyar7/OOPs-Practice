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
//         Complex value;
//         value.real = real + obj.real;
//         value.img = img + obj.img;

//         return value;
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

// #include <iostream>
// #include <string.h>
// using namespace std;

// class String
// {
// private:
//     char s1[25], s2[25];

// public:
//     String(char str1[], char str2[])
//     {
//         strcpy(this->s1, str1);
//         strcpy(this->s2, str2);
//     }
//     void operator+()
//     {
//         cout << "Contatenation: " << strcpy(s1, s2);
//     }
// };

// int main()
// {
//     char str1[] = "Ahmed";
//     char str2[] = "Yar";

//     String a1(str1, str2);

//     +a1;
// }

// Define a class Matrix to represent matrices and overload the + operator for matrix addition.

// Define a class Rectangle to represent rectangles with overloaded == and != operators to compare two rectangles for equality.

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int l;
//     int w;

// public:
//     Rectangle(int l, int w)
//     {
//         this->l = l;
//         this->w = w;
//     }

//     bool operator==(Rectangle obj) const
//     {
//         return l == obj.l && w == obj.w;
//     }
//     bool operator!=(Rectangle obj) const
//     {
//         return !(*this == obj);
//     }
// };
// int main()
// {
//     Rectangle r1(2, 2);
//     Rectangle r2(2, 2);

//     if (r1 == r2)
//     {
//         cout << "they are equal " << endl;
//     }
//     else
//     {
//         cout << "They are not equal" << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     // Overloading the == operator
//     bool operator==(Rectangle rec)
//     {
//         return length == rec.length && width == rec.width;
//     }
//     // Overloading the != operator
//     bool operator!=(Rectangle rec)
//     {
//         return !(*this == rec);
//     }
// };
// int main()
// {
//     Rectangle rec1(2, 2);
//     Rectangle rec2(2, 2);

//     if (rec1 == rec2)
//         cout << "They are equal " << endl;
//     else
//         cout << "They are equal " << endl;
// }

// Implement a class Temperature to represent temperatures with overloaded > and < operators to compare temperatures.

// #i

// #include <iostream>
// #include <string>

// using namespace std;

// class Temperature
// {
// private:
//     int value;
//     char scale;

//     int convert_into_celsius() const
//     {
//         if (scale == 'F')
//         {
//             return (value - 32) * 5 / 9;
//         }
//         return value;
//     }

// public:
//     Temperature(int value, char scale)
//     {
//         this->value = value;
//         this->scale = scale;
//     }

//     bool operator<(const Temperature obj)
//     {
//         return convert_into_celsius() < obj.convert_into_celsius();
//     }
//     bool operator>(const Temperature obj)
//     {
//         return convert_into_celsius() > obj.convert_into_celsius();
//     }
// };
// int main()
// {
//     Temperature t1(100, 'F');
//     Temperature t2(100, 'C');

//     if (t1 > t2)
//         cout << "True";
//     else
//         cout << "False";
// }

// #include <iostream>
// using namespace std;

// class Temperature
// {
// private:
//     int value;
//     char scale;

//     int ConverIntoCelsius() const
//     {
//         if (scale == 'F')
//         {
//             return (value - 32) * 5 / 9;
//         }
//         return value;
//     }

// public:
//     Temperature(int value, char scale)
//     {
//         this->value = value;
//         this->scale = scale;
//     }

//     // Operator overloading
//     bool operator<(const Temperature &obj)
//     {
//         return ConverIntoCelsius() < obj.ConverIntoCelsius();
//     }
//     bool operator>(const Temperature &obj)
//     {
//         return ConverIntoCelsius() > obj.ConverIntoCelsius();
//     }
// };

// int main()
// {
//     Temperature t1(10, 'F');
//     Temperature t2(100, 'C');

//     if (t1 < t2)
//     {
//         cout << "True" << endl;
//     }
//     else
//         cout << "False" << endl;
// }
// #include <iostream>
// #include <vector>
// using namespace std;

// class Vector
// {
// private:
//     int x, y;

// public:
//     Vector(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     Vector operator+(Vector vec)
//     {
//         return Vector(x + vec.x, y + vec.y);
//     }
//     Vector operator-(Vector vec)
//     {
//         return Vector(x - vec.x, y - vec.y);
//     }
//     void display()
//     {
//         cout << "(" << x << ", " << y << ")" << endl;
//     }
// };

// int main()
// {
//     Vector v1(10, 29);
//     Vector v2(20, 30);

//     Vector result = v1 + v2;
//     Vector result2 = v1 - v2;
//     result.display();
//     result2.display();
// }

// #include <iostream>
// using namespace std;

// class Counter
// {
// private:
//     int count = 0;

// public:
//     Counter(int count)
//     {
//         this->count = count;
//     }
//     void operator++()
//     {
//         count++;
//     }
//     void display()
//     {
//         cout << count << endl;
//     }
// };
// int main()
// {
//     Counter c(10);
//     for (int i = 0; i < 10; i++)
//     {
//         ++c;
//         c.display();
//     }
// }

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }
//     bool operator==(Rectangle rec)
//     {
//         return length == rec.length && width == rec.width;
//     }
//     bool operator<(Rectangle rec)
//     {
//         return length < rec.length && width < rec.width;
//     }
// };
// int main()
// {
//     Rectangle rec1(10, 20);
//     Rectangle rec2(2, 3);

//     if (rec1 < rec2)
//     {
//         cout << "True" << endl;
//     }
//     else
//         cout << "False";

// if (rec1 == rec2)
// {
//     cout << "They are equal ";
// }
// else
//     cout << "They are not equal " << endl;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class SortingAlgorithm
// {
// private:
//     void bubbleSort(vector<int> &arr)
//     {
//         int n = arr.size();

//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (arr[j] < arr[i])
//                 {
//                     int temp = arr[j];
//                     arr[j] = arr[i];
//                     arr[i] = temp;
//                 }
//             }
//         }
//     }

// public:
//     void operator()(vector<int> &arr) const
//     {
//         bubbleSort(arr);
//     }
// };

// int main()
// {
//     SortingAlgorithm sorter;
//     vector<int> v1 = {2, 4, 2, 6, 4};
//     sorter(v1);

//     for (auto array : v1)
//     {
//         cout << array << " ";
//     }
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Temperature
// {
// private:
//     int value;
//     char scale;

//     int convertToCelsius()
//     {
//         if (scale == 'F')
//         {
//             return (value - 32) * 5 / 9;
//         }
//         else
//             return value;
//     }

// public:
//     Temperature(int value, char scale)
//     {
//         this->value = value;
//         this->scale = scale;
//     }
//     bool operator<(Temperature temperature)
//     {
//         return convertToCelsius() < temperature.convertToCelsius();
//     }
// };

// int main()
// {
//     Temperature t2(120, 'F');
//     Temperature t1(150, 'C');

//     if (t1 < t2)
//         cout << "TRUE" << endl;
//     else
//         cout << "FALSE" << endl;
// }

// overloading the insertion operator

// #include <iostream>
// using namespace std;

// class Input
// {
// private:
//     string name;
//     int age;

// public:
//     Input(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     friend ostream &operator<<(ostream &output, Input &input)
//     {
//         output << "Name: " << input.name << endl;
//         output << "Age: " << input.age << endl;
//         return output;
//     }
//     void display()
//     {
//         cout << *this;
//     }
// };
// int main()
// {
//     Input i("AhmedYar", 19);
//     i.display();
// }

// #include <iostream>
// using namespace std;

// class InsertionOperator
// {
// private:
//     string name;
//     int age;

// public:
//     // InsertionOperator(string name, int age)
//     // {
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     friend istream &operator>>(istream &input, InsertionOperator &io)
//     {
//         input >> io.name >> io.age;
//         return input;
//     }
// };

// int main()
// {
//     InsertionOperator io;
//     cout << "Enter Your Name: " << endl;
//     cout << "Enter Your Age: ";
//     cin >> io;
// }

// Representing vector form using the exersion operator in c++

// #include <iostream>
// using namespace std;

// class Vector
// {
// private:
//     int x;
//     int y;

// public:
//     Vector(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     // Operator overloading
//     friend ostream &operator<<(ostream &output, Vector &vec)
//     {
//         output << "(" << vec.x << ", " << vec.y << ")" << endl;
//         return output;
//     }
//     void display()
//     {
//         cout << *this << endl;
//     }
// };
// int main()
// {
//     Vector v1(20, 90);
//     v1.display();
// }

// #include <iostream>
// using namespace std;

// class Operator_insertion_exersion
// {
// private:
//     string name;
//     int age;

// public:
//     friend istream &operator>>(istream &in, Operator_insertion_exersion &input)
//     {
//         in >> input.name >> input.age;
//         return in;
//     }
//     friend ostream &operator<<(ostream &out, const Operator_insertion_exersion &output)
//     {
//         out << "Name: " << output.name << endl;
//         out << "Age: " << output.age << endl;

//         return out;
//     }
//     void display()
//     {
//         cout << *this;
//     }
// };

// int main()
// {
//     Operator_insertion_exersion op;
//     cout << "Enter Name & Age: ";
//     cin >> op;

//     op.display();
// }

//

// #include <iostream>
// using namespace std;

// class Vector
// {
// private:
//     int x, y;

// public:
//     Vector(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     // Insertion Operator overloading
//     friend ostream &operator<<(ostream &out, Vector &vec)
//     {
//         out << "(" << vec.x << ", " << vec.y << ")" << endl;
//     }
//     // Addition function overloading
//     Vector operator+(Vector &vec)
//     {
//         return Vector(x + vec.x, y + vec.y);
//     }
//     // Subtracion function overloading
//     Vector operator-(Vector &vec)
//     {
//         return Vector(x - vec.x, y - vec.y);
//     }
//     // Division Operator Overloading
//     Vector operator/(Vector &vec)
//     {
//         return Vector(x / vec.x, y / vec.y);
//     }
//     // Multiplication operator overloading
//     Vector operator*(Vector &vec)
//     {
//         return Vector(x * vec.x, y * vec.y);
//     }
//     // Overloading the == Operator
//     bool operator==(Vector &vec)
//     {
//         return (x == vec.x && y == vec.y);
//     }
//     // Overloading the != operator
//     bool operator!=(Vector &vec)
//     {
//         return (x != vec.x || y != vec.y);
//     }
//     // overloading the  < sign
//     bool operator<(Vector &vec)
//     {
//         return (x < vec.x && y < vec.y);
//     }

//     void display()
//     {
//         cout << *this;
//     }
// };

// int main()
// {
//     // Object Making
//     Vector v1(1, 1);
//     Vector v2(2, 2);

//     // Operator calling
//     Vector add = v1 + v2;
//     Vector subtract = v1 - v2;
//     Vector divide = v1 / v2;
//     Vector multiply = v1 * v2;

//     // Method of display
//     divide.display();
//     add.display();
//     subtract.display();
//     multiply.display();

//     // Relation operator overlaoding
//     if (v1 == v2)
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;
//     //
//     if (v1 != v2)
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;
//     //
//     if (v1 < v2)
//         cout << "True" << endl;
//     else
//         cout << "False" << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;

// public:
//     // input operator overloading
//     friend istream &operator>>(istream &in, Student &std)
//     {
//         in >> std.name >> std.age;
//     }
//     friend ostream &operator<<(ostream &out, Student &std)
//     {
//         out << std.name << " " << std.age << endl;
//     }
//     void display()
//     {
//         cout << *this;
//     }
// };

// int main()
// {
//     cout << "Enter the name and age";
//     Student s;
//     cin >> s;
//     s.display();

//     return 0;
// }