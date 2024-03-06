// 1.	Create a class named TemperatureConverter with overloaded functions to convert temperatures between Celsius and Fahrenheit. Implement functions for converting Celsius to Fahrenheit and vice versa. Allow users to input temperatures and display the converted results.

#include <iostream>
using namespace std;
class TemperatureConverter
{
public:
    double celsiusToFahrenheit(double celsius)
    {
        return (celsius * 9 / 5) + 32;
    }

    double FahrenheitTocelsius(double fahrenheit)
    {
        return (fahrenheit - 32) * 5 / 9;
    }
};

int main()
{
    TemperatureConverter tempConverter;
    float temperature;

    cout << "Enter the Temperature: ";
    cin >> temperature;

    char choice;
    cout << "Enter the Choice: ";
    cin >> choice;

    if (choice == 'C' || choice == 'c')
    {
        cout << "Celsius To Fahrenhiet: " << tempConverter.celsiusToFahrenheit(temperature) << endl;
    }
    else if (choice == 'F' || choice == 'f')
    {
        cout << "Fahrenheit to Celsius: " << tempConverter.FahrenheitTocelsius(temperature) << endl;
    }
}

// 2.	Design a class MathOperations with overloaded functions for basic math operations such as addition, subtraction, multiplication, and division. The functions should handle both integers and doubles. Allow users to input numbers and choose the operation to perform

#include <iostream>
using namespace std;

class MathOperations
{
public:
    double add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(int a, int b)
    {
        return a - b;
    }
    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(int a, int b)
    {
        return a * b;
    }
    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(int a, int b)
    {
        if (b == 0)
        {
            cout << "Please Provide Valid input \n";
        }
        return a / b;
    }
    double divide(double a, double b)
    {
        if (b == 0.0)
            cout << "Please Provide Valid Input: \n";
        return a / b;
    }
};

int main()
{
    MathOperations math;
    double a, b;
    cout << "Enter first Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;

    char operators;
    cout << "Enter The Operater: (+, -, /, *)  \n";
    cin >> operators;

    if (operators == '+')
    {
        cout << "Addition Result: " << math.add(a, b) << endl;
    }

    else if (operators == '-')
    {
        cout << "Subtraction Result: " << math.subtract(a, b) << endl;
    }

    else if (operators == '*')
    {
        cout << "Multiplication Result: " << math.multiply(a, b) << endl;
    }

    else if (operators == '/')
    {
        cout << "Division Result: " << math.divide(a, b) << endl;
    }
    else
        cout << "Please Provide valid input \n";

    return 0;
}

// 3.	Create a class named StringManipulator with overloaded functions for string manipulation. Implement functions to concatenate two strings, find the length of a string, and convert a string to uppercase. Allow users to input strings and choose the operation to perform.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class StringManipulator
{
public:
    string concatenateStrings(string a, string b)
    {
        return a.append(b);
    }

    int lengthOfString(string a)
    {
        return a.length();
    }

    string ToupperCase(string a)
    {
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        return a;
    }
};

int main()
{
    StringManipulator string_manipulator;

    cout << "1. Concatination Of String " << endl;
    cout << "2. Length Of String " << endl;
    cout << "3. UpperCasing Of String " << endl;

    int choice;
    cout << "Enter the Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        string a, b;
        cout << "Enter The first String: ";
        cin >> a;
        cout << "Enter the 2nd String: ";
        cin >> b;
        cout << "Result After Concatenation: " << string_manipulator.concatenateStrings(a, b) << endl;
    }

    else if (choice == 2)
    {
        string a;
        cout << "Enter the String: ";
        cin >> a;
        cout << "Result of Length Of String: " << string_manipulator.lengthOfString(a) << endl;
    }

    else if (choice == 3)
    {
        string a;
        cout << "Enter the String: ";
        cin >> a;
        cout << "Result of UpperCasing of String: " << string_manipulator.ToupperCase(a) << endl;
    }

    else
        cout << "Please Enter Valid Input ❌❌" << endl;
}
