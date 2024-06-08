// #include <iostream>
// using namespace std;

// double divide(int a, int b)
// {
//     if (b == 0)
//     {
//         throw "Division by zero!";
//     }
//     return static_cast<double>(a) / b;
// }

// int main()
// {
//     int x = 10, y = 0;
//     // Your task: Add try, throw, and catch blocks to handle the exception
//     try
//     {
//         if (y == 0)
//             throw runtime_error("Division By zero");
//         else
//         {
//             double result = divide(x, y);
//             cout << "Result of division: " << result << endl;
//         }
//     }
//     catch (const exception &e1)
//     {
//         cout << "Error: " << e1.what() << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

class Person
{
public:
    Person(const string &name, int age)
    {
        if (age < 0)
        {
            throw invalid_argument("Age cannot be negative!");
        }
        this->name = name;
        this->age = age;
    }

    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

private:
    string name;
    int age;
};

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    int index = 10; // Intentionally out of range
    Person *p = nullptr;

    // Your task: Add try, throw, and catch blocks to handle the exceptions
    try
    {
        p = new Person("Alice", -1);     // This will throw an exception
        int element = numbers.at(index); // This will throw an exception
        cout << "Element at index " << index << ": " << element << endl;
        p->display();
    }
    catch (const exception &e)
    {
        cout << "Exception caught: " << e.what() << endl;
    }

    delete p;

    return 0;
}
