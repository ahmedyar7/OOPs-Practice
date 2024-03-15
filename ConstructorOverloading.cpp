#include <iostream>
using namespace std;

class Complex
{

private:
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your Number " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    Complex c2(2);
    c2.printNumber();
    c1.printNumber();

    return 0;
}
