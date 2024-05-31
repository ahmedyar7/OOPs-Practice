// #include <iostream>
// #include <string>
// #include <fstream>

// using namespace std;

// int main()
// {
//     // Write to the file
//     string str = "Ahmed Yar";
//     ofstream outFile("samplefile.txt"); // Write operation on file

//     if (outFile.is_open())
//     {
//         outFile << str;
//         outFile.close(); // Close the file after writing
//     }
//     else
//     {
//         cerr << "Unable to open file for writing" << endl;
//         return 1;
//     }

//     // Read from the file
//     string str2 = "";
//     ifstream inFile("samplefile.txt");

//     if (inFile.is_open())
//     {
//         getline(inFile, str2); // Read the entire line from the file
//         cout << str2 << endl;  // Print the read string
//         inFile.close();        // Close the file after reading
//     }
//     else
//     {
//         cerr << "Unable to open file for reading" << endl;
//         return 1;
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class FileHanling
{
private:
public:
    string str = "This is the Input to this file";

    void file_input()
    {
        ofstream fileOut("samplefile.txt");
        fileOut << str;
    }

    void file_output()
    {
        // Reading from thie file and then showing the character to the console
        ifstream fileInput("samplefile.txt");
        string str2;

        while (getline(fileInput, str2))
        {
            cout << str2 << endl;
        }
    }

    void multi_line_input()
    {
        ofstream multiLine("samplefile.txt");
        string multi = "This is line 1\nThis is line 2\nThis is line 3";

        multiLine << multi;
    }

    void mulitLineOutput()
    {
        ifstream input("samplefile.txt");
        string string;
        while (getline(input, string))
        {
            cout << string << endl;
        }
    }

    void numberInput()
    {
        ofstream out("samplefile.txt");
        for (int i = 0; i <= 10; i++)
        {
            out << i << endl;
        }
    }

    void numberOutput()
    {
        ifstream input("samplefile.txt");
        string i;
        while (getline(input, i))
        {
            cout << i << endl;
        }
    }

    void errorHandling()
    {
        string fileName;
        cin >> fileName;
        try
        {
            ifstream file(fileName);
            if (!file.is_open())
            {
                throw runtime_error("This file donot exist");
            }
            else
            {
                string contents;
                while (getline(file, contents))
                {
                    cout << contents;
                }
            }
        }
        catch (exception &e)
        {
            cout << "Error: " << e.what();
        }
    }

    void appendingTofile()
    {
        ofstream file("samplefile.txt", ios::app);
        file << "This is some additional text";
    }
};

class QuestionPractice
{
public:
    void solveEquation()
    {
        string fileName = "samplefile.txt";
        string equation;
        ifstream infile(fileName);

        if (!infile)
        {
            cout << "Unable to open the file " << endl;
        }

        // Reading the Equation from the file
        getline(infile, equation);
        infile.close();

        // Parsing the Equation:-

        stringstream ss(equation);
        double operand1, operand2;
        char op;
        ss >> operand1 >> op >> operand2;

        double result;
        bool validEquation = true;

        // Solving the Equation;
        switch (op)
        {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case 'x':
            result = operand1 * operand2;
            break;
        case '/':
            try
            {
                if (operand2 != 0)
                {
                    result = operand1 / operand2;
                }
                else
                {
                    throw runtime_error("The Division is not Possible");
                }
            }
            catch (exception &e)
            {
                cout << "Error: " << e.what() << endl;
            }
            break;

        default:
            cout << "The equation is invalid" << endl;
            validEquation = false;
        }
        if (validEquation)
        {
            ofstream fileOut("samplefile.txt", ios::app);
            if (!fileOut)
            {
                cout << "Unable to open the file" << endl;
            }
            fileOut << "Result: " << result << endl;
            fileOut.close();
        }
    }
};

int main()
{
    // FileHanling fh;

    QuestionPractice qp;
    qp.solveEquation();

    // fh.numberInput();
    // fh.numberOutput();
    // fh.appendingTofile();

    // fh.mulitLineOutput();

    // fh.multi_line_input();

    // File Output:
    // fh.file_input();

    // File input:
    // fh.file_output();
}
