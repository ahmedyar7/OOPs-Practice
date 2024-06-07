#include <iostream>
using namespace std;

double divide(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero!";
    }
    return static_cast<double>(a) / b;
}

int main()
{
    int x = 10, y = 0;
    // Your task: Add try, throw, and catch blocks to handle the exception
    double result = divide(x, y);
    cout << "Result of division: " << result << endl;
    return 0;
}
