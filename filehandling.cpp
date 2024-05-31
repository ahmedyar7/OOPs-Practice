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
};

int main()
{
    FileHanling fh;

    fh.mulitLineOutput();

    fh.multi_line_input();

    // File Output:
    // fh.file_input();

    // File input:
    // fh.file_output();
}