// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 20;
//     try
//     {
//         if (age >= 24)
//         {
//             cout << "You have the access to drink the alcohol";
//         }
//         else
//         {
//             throw(age);
//         }
//     }
//     catch (int age)
//     {
//         cout << "you donot have the access to drink the alcohol" << endl;
//         cout << "You age is " << age << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     int denum;
//     int output;

//     cout << "Enter the number for the divison: ";
//     cin >> num;
//     cin >> denum;

//     try
//     {
//         if (denum == 0)
//         {
//             throw denum;
//         }
//         else
//         {
//             output = num / denum;
//         }
//     }
//     catch (int d)
//     {
//         cout << "You cannot enter zero in denominator beacause this will give the undefined terms \n";
//     }
// }

// # File Opening exception handling in C++

// #include <iostream>
// #include <string>
// #include <fstream>

// using namespace std;
// int main()
// {
//     cout << "Enter the name of the file you want to open: " << endl;
//     string file_name;
//     cin >> file_name;

//     try
//     {
//         ifstream file(file_name);
//         if (!file.is_open())
//         {
//             throw runtime_error("Unable to open the file");
//         }
//         string line;
//         cout << "The contents of the line in the file " << endl;
//         while (getline(file, line))
//         {
//             cout << line << endl;
//         }
//         file.close();
//     }
//     catch (exception &e)
//     {
//         cout << "Error " << e.what() << endl;
//     }
// // }

// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;

// int main()
// {
//     cout << "Enter the name of the file: ";
//     string fileName;
//     cin >> fileName;

//     try
//     {
//         ifstream file(fileName);
//         if (!file.is_open())
//         {
//             throw runtime_error("The file could not be opened");
//         }
//         else
//         {
//             string line;
//             while (getline(file, line))
//             {
//                 cout << "The contents in the file are " << endl;
//                 cout << line << endl;
//             }
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main()
// {
//     cout << "Enter the name of file: ";
//     string filename;
//     cin >> filename;

//     try
//     {
//         ifstream file(filename);
//         if (!file.is_open())
//         {
//             throw runtime_error("This file could not be opened");
//         }
//         else
//         {
//             string contents;
//             while (getline(file, contents))
//             {
//                 cout << "The contents are: " << endl;
//                 cout << contents << endl;
//             }
//         }
//     }
//     catch (exception &E)
//     {
//         cout << "Error " << E.what() << endl;
//     }
// }

// ?Division by Zero Exception : Create a program that takes two numbers as input and performs division.Implement exception handling to catch and handle the division by zero error.

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the Numirator " << endl;
//     int num;
//     cin >> num;
//     cout << "Enter denominator " << endl;
//     int denum;
//     cin >> denum;

//     try
//     {
//         if (denum == 0)
//         {
//             throw runtime_error("The division is not possible by 0");
//         }
//         else
//         {
//             int result = 0;
//             result = num / denum;
//             cout << "Result: " << result << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// ? Array Index Out of Bounds Exception: Write a program that initializes an array and prompts the user for an index to access. Implement exception handling to catch and handle cases where the user enters an out-of-bounds index.

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter the elements: ";
//     int num_elements;
//     cin >> num_elements;
//     int array[num_elements];

//     for (int i = 0; i < num_elements; i++)
//     {
//         cin >> array[i];
//         cout << endl;
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     cout << "Enter the index: " << endl;
//     int index;
//     cin >> index;

//     try
//     {

//         if (index > num_elements)
//         {
//             throw out_of_range("The index is out of range");
//         }
//         else
//         {
//             for (int i = 0; i < num_elements; i++)
//             {
//                 if (i == index)
//                 {
//                     cout << array[i] << endl;
//                 }
//             }
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

//  ? Develop a program that asks the user to enter their age. Implement exception handling to handle cases where the user enters invalid input (e.g., non-numeric characters).

// #include <iostream>
// #include <stdexcept>
// using namespace std;
// int main()
// {
//     cout << "Enter the Name: ";
//     string name;
//     cin >> name;

//     try
//     {
//         cout << "Enter the age: ";
//         int age;
//         cin >> age;
//         if (cin.fail())
//         {
//             throw invalid_argument("Please enter a valid input");
//         }
//         else
//         {
//             cout << "Your name is " << name << endl;
//             cout << "Your age is " << age << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;
// int main()
// {
//     cout << "Enter the Price in Ruppee: ";
//     int rupeePrice;

//     try
//     {
//         cin >> rupeePrice;
//         if (cin.fail())
//         {
//             throw invalid_argument("Enter a valid input");
//         }
//         else
//         {
//             int priceDollar;
//             priceDollar = rupeePrice / 300;
//             cout << "Price in Dollar: " << priceDollar << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// #include <iostream>
// #include <stdexcept> // for std::bad_alloc

// int main()
// {
//     int *arr = nullptr;
//     int size;

//     std::cout << "Enter the size of the array: ";
//     std::cin >> size;

//     try
//     {
//         arr = new int[size]; // Dynamically allocate memory for the array

//         // Use the array (not implemented in this example)

//         delete[] arr; // Deallocate memory for the array
//     }
//     catch (const std::bad_alloc &e)
//     {
//         std::cerr << "Error: Memory allocation failed. " << e.what() << std::endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main()
// {
//     cout << "Enter the size of array: ";
//     int size;
//     cin >> size;
//     int *arr = nullptr;

//     try
//     {
//         arr = new int[size];

//         delete[] arr;
//     }
//     catch (exception bad_alloc &e)
//     {
//         cout << "Error" << e.what() << endl;

//     }
// }

//  ? Custom Exception Handling: Design a program that calculates the factorial of a number. Implement a custom exception class for handling cases where the input is negative.

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Enter the number: ";
//     int number;
//     cin >> number;

//     try
//     {
//         if (number < 0)
//         {
//             throw invalid_argument("Please enter a positive number ");
//         }
//         else
//         {
//             int result = 1;
//             for (int i = 1; i <= number; i++)
//             {
//                 result *= i;
//             }
//             cout << result << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// ? Sorting Algorithm: Write a program that sorts an array of integers using a sorting algorithm such as bubble sort or quicksort. Implement exception handling to handle cases where the array is empty or contains invalid elements

// #include <iostream>
// #include <stdexcept>

// using namespace std;

// int main()
// {
//     int array[] = {32, 45, 23, 52, 5423, 42423, 342, 35234, 234, 25, 2342};
//     int size = sizeof(array) / sizeof(array[0]);

//     try
//     {
//         if (size == 0)
//         {
//             throw invalid_argument("The array is empty");
//         }
//         else
//         {
//             for (int i = 0; i < size - 1; i++)
//             {
//                 for (int j = i + 1; j < size; j++)
//                 {
//                     if (array[j] < array[i])
//                     {
//                         int temp = array[j];
//                         array[j] = array[i];
//                         array[i] = temp;
//                     }
//                 }
//             }
//             for (int i = 0; i < size; i++)
//             {
//                 cout << array[i] << " ";
//             }
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }
// ?File Handling Exception: Write a program that opens a file, reads its contents, and displays them. Implement exception handling to deal with cases where the file cannot be opened or read.

// #include <iostream>
// #include <stdexcept>
// #include <fstream>
// using namespace std;

// int main()
// {
//     cout << "Enter the Name of the File: " << endl;
//     string filename;
//     cin >> filename;

//     try
//     {
//         ifstream file(filename);
//         if (!file.is_open())
//         {
//             throw runtime_error("This file donot exist");
//         }
//         else
//         {
//             string contents;
//             cout << "The contents of the file are " << endl;

//             while (getline(file, contents))
//             {
//                 cout << contents << endl;
//             }
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "The Error is: " << e.what() << endl;
//     }
// }

// #include <iostream>
// #include <fstream>
// #include <stdexcept>
// using namespace std;

// int main()
// {
//     cout << "Enter the name of file: " << endl;
//     string filename;
//     cin >> filename;
//     try
//     {
//         ifstream file(filename);
//         if (!file.is_open())
//         {
//             throw runtime_error("The file donot exisit");
//         }
//         else
//         {
//             cout << "The content of file are " << endl;
//             string contents;
//             while (getline(file, contents))
//             {
//                 cout << contents << endl;
//             }
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "Error: " << e.what() << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "Enter the first number and second: \n";
//     int n1, n2;
//     cin >> n1 >> n2;
//     try
//     {
//         if (n2 == 0)
//         {
//             throw runtime_error("The number cannot be divided by zero");
//         }
//         else
//         {
//             int result = n1 / n2;
//             cout << result << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "ERROR: " << e.what() << endl;
//     }
// }

// #include <iostream>
// #include <stdexcept>
// using namespace std;

// int main()
// {
//     cout << "Enter the name: ";
//     string name;
//     cin >> name;
//     cout << "Enter the age: ";
//     int age;
//     cin >> age;

//     try
//     {
//         if (cin.fail())
//         {
//             throw runtime_error("Please enter valid input");
//         }
//         else
//         {
//             cout << "Your name and age are" << endl;
//             cout << name << endl;
//             cout << age << endl;
//         }
//     }
//     catch (exception &e)
//     {
//         cout << "ERROR_CODE: " << e.what() << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int array[] = {23, 43, 2, 43, 5423, 454, 34};
//     int n = sizeof(array) / sizeof(array[0]);
// }

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

class Exception
{
public:
    int divideByZero()
    {
        cout << "Enter the first number: ";
        int n1;
        cin >> n1;
        cout << "Enter the 2nd  number: ";
        int n2;
        cin >> n2;

        try
        {
            if (n2 == 0)
            {
                throw runtime_error("Not possible");
                cin >> n2;
            }
            else
            {
                int result = n1 / n2;
                cout << "Result: " << result << endl;
            }
        }
        catch (exception &e)
        {
            cout << "Exception: " << e.what() << endl;
        }
    }

    int negitive_sqrt()
    {
        cout << "Enter a number: ";
        int n;
        cin >> n;
        try
        {
            if (n < 0)
            {
                throw runtime_error("Not possible");
            }
            else
            {
                int result = sqrt(n);
                cout << "Result :" << result << endl;
            }
        }
        catch (exception &e)
        {
            cout << "Exception: " << e.what() << endl;
        }
    }

    int invalid_input()
    {
        cout << "Enter your password: ";
        string password;
        cin >> password;
        try
        {
            if (password.length() < 5)
            {
                throw runtime_error("Please enter password greater then 5");
            }
            else
            {
                cout << "Password: " << password << endl;
            }
        }
        catch (exception &e)
        {
            cout << "Exception: " << e.what() << endl;
        }
    }

    int file_io()
    {
        cout << "Enter the fileName: ";
        string fileName;
        cin >> fileName;

        try
        {
            ifstream file(fileName);
            if (!file.is_open())
            {
                throw runtime_error("The fileName was not found");
            }
            else
            {
                string contents;
                while (getline(file, contents))
                {
                    cout << contents << endl;
                }
            }
        }
        catch (exception &e)
        {
            cout << "Exception: " << e.what() << endl;
        }
    }

    int convertToString()
    {
        cout << "Enter a string: ";
        string s;
        cin >> s;
        try
        {
            int result = stoi(s);
            cout << result << endl;
        }
        catch (const invalid_argument &e)
        {
            cout << "Invalid arugment" << e.what() << endl;
        }
        catch (const out_of_range &e)
        {
            cout << "Out of range: " << e.what() << endl;
        }
        catch (...)
        {
            cout << "Unexpected error occur " << endl;
        }
    }

    int index_out_of_range()
    {
        int n = 6;
        int array[6] = {12, 3, 43, 2343, 54, 34};

        cout
            << "Enter the index: ";
        int index;
        cin >> index;

        try
        {
            if (index > n)
            {
                throw runtime_error("THE INDEX WAS OUT OF RANGE");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (index == i)
                    {
                        cout << array[i] << endl;
                    }
                }
            }
        }
        catch (runtime_error &e)
        {
            cout << "Exception: " << e.what() << endl;
        }
    }
};
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string filename = "samplefile.txt";
    string equation;
    ifstream inFile(filename);

    if (!inFile)
    {
        cerr << "Unable to open file for reading" << endl;
        return 1;
    }

    // Read the equation from the file
    getline(inFile, equation);
    inFile.close();

    // Parse the equation
    stringstream ss(equation);
    double operand1, operand2;
    char op;
    ss >> operand1 >> op >> operand2;

    double result;
    bool validEquation = true;

    // Solve the equation
    switch (op)
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        if (operand2 != 0)
            result = operand1 / operand2;
        else
        {
            cerr << "Division by zero error" << endl;
            validEquation = false;
        }
        break;
    default:
        cerr << "Invalid operator" << endl;
        validEquation = false;
    }

    // Write the result back to the file if the equation is valid
    if (validEquation)
    {
        ofstream outFile(filename, ios::app); // Open in append mode
        if (!outFile)
        {
            cerr << "Unable to open file for writing" << endl;
            return 1;
        }

        outFile << "\nResult: " << result << endl;
        outFile.close();
    }

    return 0;
}
