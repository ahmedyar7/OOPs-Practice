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

#include <iostream>
using namespace std;

class friend;

class data
{
private:
    string name;
    int age;
    friend class friend;

public:
    data(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
class friend {
    private : s

};