#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class QuestionPractice
{
public:
    void calculations()
    {
        ifstream inFile("file.txt");
        string equation;
        if (!inFile.is_open())
        {
            cout << "Could not open the file " << endl;
        }
        getline(inFile, equation);
        bool validEqs = false;
        double operand1, operand2, result;
        char operators;
        stringstream ss(equation);
        ss >> operand1 >> operators >> operand2;

        if (operators == '+')
            result = operand1 + operand2;
        else if (operators == '-')
            result = operand1 - operand2;
        else if (operators == '*' || operators == 'x' || operators == 'X')
            result = operand1 * operand2;
        else if (!operand2 & operators == '/')
            result = operand1 / operand2;

        ofstream outFile("file.txt", ios::app);
        if (!outFile.is_open())
            cout << "Could not open the file" << endl;
        else
            outFile << "\nResult: " << result << endl;
    }
    void largestNumbeInFile()
    {
        ifstream inFile("file.txt");
        if (!inFile.is_open())
            cout << "Could not open the file" << endl;
        int i;
        vector<int> numbers;
        while (inFile >> i)
        {
            numbers.push_back(i);
        }
        inFile.close();
        int largestNumber = numbers[0];
        for (int i = 0; i < numbers.size(); i++)
        {
            if (largestNumber < numbers[i])
            {
                largestNumber = numbers[i];
            }
        }
        ofstream outFile("file.txt", ios::app);
        if (!outFile.is_open())
        {
            cout << "Could not open the file " << endl;
        }
        else
            outFile << "\nResult: " << largestNumber << endl;
        outFile.close();
    }

    void sortedFile()
    {
        ifstream inFile("file.txt");
        if (!inFile.is_open())
            cout << "Could not open the file" << endl;

        int i;
        vector<int> vec;
        while (inFile >> i)
        {
            vec.push_back(i);
        }
        inFile.close();
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
        ofstream outFile("file.txt", ios::app);
        if (!outFile.is_open())
            cout << "Couldn't open the file " << endl;

        outFile << "Sorted :\n";
        for (int i = 0; i < vec.size(); i++)
        {
            outFile << " " << vec[i];
        }
    }

    void average()
    {
        ifstream inFile("file.txt");
        if (!inFile.is_open())
            cout << "Could not open the file" << endl;
        int i;
        vector<int> vec;
        while (inFile >> i)
            vec.push_back(i);

        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            sum += vec[i];
        }
        double average = sum / vec.size();
        ofstream outFile("file.txt", ios::app);
        outFile << endl;
        outFile << "Average: " << average << endl;
        outFile << "Average: " << vec.size() << endl;
        outFile << "sum: " << sum << endl;
    }

    void numOfCharacterWords()
    {
        ifstream inFile("file.txt");
        if (!inFile.is_open())
        {
            cout << "Coulnot open the file";
        }
        string line;
        int word_count = 0;
        int char_count = 0;
        while (getline(inFile, line))
        {
            bool isWord = false;
            for (char c : line)
            {
                if (isspace(c))
                {
                    isWord = false;
                    word_count++;
                }
                else
                {
                    char_count++;
                    isWord = true;
                }
            }
            if (isWord)
            {
                word_count++;
            }
        }
        ofstream outFile("file.txt");
        outFile << endl;
        outFile << "Word Count " << word_count << endl;
        outFile << "Char Count " << char_count << endl;
    }
};
int main()
{
    QuestionPractice q;
    q.numOfCharacterWords();
    // q.average();
    // q.sortedFile();
    // q.largestNumbeInFile();
    // q.calculations();
}