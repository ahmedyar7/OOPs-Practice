#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

class FileHandling
{
public:
    void sortAscend()
    {
        // Reading the file
        ifstream inFile("file.txt");
        try
        {
            if (!inFile.is_open())
            {
                throw runtime_error("The file Coulnot be found");
            }
        }
        catch (exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }

        int num;
        vector<int> vec;

        // Input Data to vector
        while (inFile >> num)
        {
            vec.push_back(num);
        }
        inFile.close();

        // Sorting Alogrithm

        for (int i = 0; i < vec.size() - 1; i++)
        {
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[j] < vec[i])
                {
                    int swp = vec[j];
                    vec[j] = vec[i];
                    vec[i] = swp;
                }
            }
        }

        // Writing to file:
        ofstream outFile("file.txt", ios::app);
        outFile << "\nAsceding Sorting: \n";
        for (int i = 0; i < vec.size(); i++)
            outFile << vec[i] << " ";
    }

    void sortDescend()
    {
        // Reading the file.
        ifstream inFile("file.txt");
        try
        {
            if (!inFile.is_open())
                throw runtime_error("This file couldn't Open");
        }
        catch (const exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }

        // Inserting the Data.
        int num;
        vector<int> vec;
        while (inFile >> num)
            vec.push_back(num);

        inFile.close();

        // Algorithm
        for (int i = 0; i < vec.size() - 1; i++)
        {
            for (int j = i + 1; j < vec.size(); j++)
            {
                if (vec[j] > vec[i])
                {
                    int swp = vec[j];
                    vec[j] = vec[i];
                    vec[i] = swp;
                }
            }
        }

        // Writing to file:
        ofstream outFile("file.txt", ios::app);
        outFile << "\nResult: \n";
        for (int i = 0; i < vec.size(); i++)
        {
            outFile << vec[i] << " ";
        }
    }

    void solveEquation()
    {
        // Reading the file
        ifstream inFile("file.txt");
        try
        {
            if (!inFile.is_open())
                throw runtime_error("The file could not open");
        }
        catch (const runtime_error &e)
        {
            cout << "Error: " << e.what();
        }

        // Getting the equation
        string eq;
        getline(inFile, eq);
        int op1, op2, result = 0;
        char ops;

        stringstream ss(eq);
        ss >> op1 >> ops >> op2;

        // Solving the equation.
        try
        {
            if (ops == '+')
                result = op1 + op2;
            else if (ops == '-')
                result = op1 - op2;
            else if (ops == 'X' || ops == 'x' || ops == '*')
                result = op1 * op2;
            else if (ops == '/' && op2 == 0)
                throw runtime_error("This is not possible");
            else
                result = op1 / op2;
        }
        catch (runtime_error &e)
        {
            cout << "Error: " << e.what() << endl;
        }

        // Writing to the file:
        ofstream outFile("file.txt", ios::app);
        outFile << "\nResult: " << result;
    }

    void largestNumber()
    {
        // Reading the file
        ifstream infile("file.txt");
        try
        {
            if (!infile.is_open())
                throw runtime_error("The file was not found");
        }
        catch (runtime_error e)
        {
            cout << "Error: " << e.what() << endl;
        }
        int num;
        vector<int> numbers;
        while (infile >> num)
        {
            numbers.push_back(num);
        }
        infile.close();

        // Algorithm
        int largest = numbers[0];
        for (int i = 0; i < numbers.size(); i++)
        {
            if (numbers[i] > largest)
            {
                largest = numbers[i];
            }
        }

        // Writing to the file
        ofstream outFile("file.txt", ios::app);
        outFile << "\n"
                << largest;
    }

    void word_char_count()
    {
        ifstream inFile("file.txt");
        if (!inFile.is_open())
            cout << "Error: File Couldnot open ";
        int word_count = 0;
        int char_count = 0;

        string line;
        while (getline(inFile, line))
        {
            bool is_word = false;
            for (char c : line)
            {
                if (isspace(c))
                {
                    is_word = true;
                    word_count++;
                }
                else
                {
                    char_count++;
                }
            }
            if (is_word)
                word_count++;
        }

        ofstream outFile("file.txt", ios::app);
        outFile << "\nWord Count " << word_count << endl;
        outFile << "Character Count " << char_count << endl;
    }

    void wordcharcount()
    {
        ifstream inFile("file.txt");
        int word_count = 0;
        int char_count = 0;
        string line;
        while (getline(inFile, line))
        {
            bool is_word = false;
            for (char c : line)
            {
                if (isspace(c))
                {
                    is_word = true;
                    word_count++;
                }
                else
                {
                    char_count++;
                }
            }
            if (is_word)
            {
                word_count++;
            }
        }

        ofstream outFile("file.txt", ios::app);
        outFile << "\nWord Count: " << word_count << endl;
        outFile << "Character Count: " << char_count << endl;
    }
};

int main()
{
    FileHandling fh;
    // fh.wordcharcount();
    // fh.word_char_count();
    // fh.largestNumber();
    // fh.solveEquation();
    // fh.sortDescend();
    // fh.sortAscend();
}