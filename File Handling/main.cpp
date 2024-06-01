#include <iostream>
#include <string>
#include <vector>
#include <fstream>
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
};

int main()
{
    FileHandling f;
    f.num_word_num_char();
    return 0;
}
