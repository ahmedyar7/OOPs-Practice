#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

class FileHandling
{
public:
    void num_word_num_char()
    {
        ifstream fileinput("file.txt");
        if (!fileinput.is_open())
            cout << "Could not open the file: ";

        string line;
        int word_count = 0;
        int char_count = 0;

        while (getline(fileinput, line))
        {
            bool inword = false;
            for (char c : line)
            {
                if (isspace(c))
                {
                    word_count++;
                    inword = false;
                }
                else
                {
                    char_count++;
                    inword = true;
                }
            }
            if (inword)
                word_count++;
        }
        fileinput.close();

        ofstream writeFile("file.txt", ios::app);
        if (!writeFile.is_open())
            cout << "Couldnot open file for reading" << endl;

        writeFile << "\nWord Count: " << word_count << endl;
        writeFile << "\nCharacter Count: " << char_count << endl;
    }

    void numberofwordnumberofcharacters()
    {
        // TODO: Reading from the file
        ifstream readFile("file.txt");
        if (!readFile.is_open())
            cout << "Could not open the file " << endl;

        string line;
        int w_count = 0;
        int c_count = 0;

        while (getline(readFile, line))
        {
            bool inword = false;
            for (char c : line)
            {
                if (isspace(c))
                {
                    w_count++;
                    inword = true;
                }
                else
                {
                    c_count++;
                    inword = false;
                }
            }
            if (inword)
            {
                c_count++;
            }
        }
        ofstream write_file("file.txt", ios::app);
        cout << endl;
        write_file << "Word count: " << w_count << endl;
        write_file << "Character count: " << c_count << endl;
        // TODO: Applying the algorithm
        // TODO: Writing to the file
    }
    void reversingOfWord()
    {
        string userInput;
        cout << "Enter the string: " << endl;
        getline(cin, userInput);

        stringstream ss(userInput);
        string word;
        string reversedWord;

        while (ss >> word)
        {
            reversedWord = word + "" + reversedWord;
        }
        cout << reversedWord << endl;
    }

    void sortingNumbers()
    {
        ifstream readFile("file.txt");
        if (!readFile.is_open())
        {
            cout << "This file could not open" << endl;
        }
        int i;
        vector<int> numbers;
        while (readFile >> i)
        {
            numbers.push_back(i);
        }
        if (numbers.empty())
            cout << "The file is empty" << endl;

        for (int i = 0; i < numbers.size() - 1; i++)
        {
            for (int j = i + 1; j < numbers.size(); j++)
            {
                if (numbers[j] < numbers[i])
                {
                    int swap = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = swap;
                }
            }
        }
        ofstream writeFile("file.txt", ios::app);
        if (!writeFile.is_open())
        {
            cout << "Could not open this file" << endl;
        }

        cout << endl;
        writeFile << "Sorted Array: " << endl;
        for (int i = 0; i < numbers.size(); i++)
        {
            writeFile << numbers[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    FileHandling f;
    f.sortingNumbers();
    // f.reversingOfWord();
    // f.numberofwordnumberofcharacters();
    // f.num_word_num_char();

    return 0;
}
