#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "This is base function";
    }
};
class Derived : public Base
{
public:
    void print() override
    {
        cout << "This is derived class";
    }
};

int main()
{
    int array[5] = {12, 3, 4, 32};
    int *aptr = array;
    for (int i = 0; i < 5; i++)
    {
        cout << (aptr + i) << " " << *(aptr + i) << endl;
    }
}