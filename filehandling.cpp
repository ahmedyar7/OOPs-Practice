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

    void newEquation()
    {
        // Todo: Reading from the file.
        ifstream equationFile("samplefile.txt");
        string equation;
        if (!equationFile.is_open())
        {
            cout << "Could not open the file for reading " << endl;
        }
        getline(equationFile, equation);
        equationFile.close();

        bool validEqution = true;

        // todo: Parsing the file throught sstream class
        double operand1,
            operand2, result;
        char ops;

        stringstream ss(equation);
        ss >> operand1 >> ops >> operand2;

        // todo make the equation
        if (ops == '+')
        {
            result = operand1 + operand2;
        }
        else if (ops == '-')
        {
            result = operand1 - operand2;
        }
        else if (ops == 'x' || ops == 'X' || ops == '*')
        {
            result = operand1 * operand2;
        }
        else if (ops == '/')
        {
            try
            {
                if (operand2 != 0)
                {
                    result = operand1 / operand2;
                }
                else
                {
                    throw runtime_error("Not possible operation");
                }
            }
            catch (exception &e)
            {
                cout << "Error: " << e.what() << endl;
            }
        }
        else
        {
            cout << "Operation is invalid" << endl;
            validEqution = false;
        }
        if (validEqution)
        {
            ofstream equationout("samplefile.txt", ios::app);
            equationout << "Result:"
                        << result << endl;
            equationout.close();
        }
    }
    void solvingEquation()
    {
        // TODO: Get the file reading
        ifstream equation_File("samplefile.txt");
        string equation;
        while (getline(equation_File, equation))
        {

            bool isEquationValid = true;

            // TODO: Parse the equation using the sstream object.
            double operand1, operand2, result;
            char operators;
            stringstream ss(equation);
            ss >> operand1 >> operators >> operand2;

            // TODO: Giving calculation fnctionality.
            if (operators == '+')
            {
                result = operand1 + operand2;
            }
            else if (operators == '-')
            {
                result = operand1 - operand2;
            }
            else if (operators == 'x' || operators == 'X' || operators == '*')
            {
                result = operand1 * operand2;
            }
            else if (operators == '/')
            {
                try
                {
                    if (operand2 != 0)
                        result = operand1 / operand2;
                    else
                        throw runtime_error("Not possible");
                }
                catch (exception &e)
                {
                    cout << "Error: " << e.what();
                }
            }
            else
            {
                isEquationValid = false;
                cout << "Equation is invalid " << endl;
            }
            if (isEquationValid)
            {
                ofstream outfile("samplefile.txt", ios::app);
                outfile << "Result " << result << endl;
            }
        }
    }
};

int main()
{
    // FileHanling fh;

    QuestionPractice qp;
    // qp.solvingEquation();
    // qp.newEquation();
    // qp.solveEquation();

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
