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
};
int main()
{
    QuestionPractice q;
    q.calculations();
}