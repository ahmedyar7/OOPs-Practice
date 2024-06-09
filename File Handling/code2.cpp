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
};

int main()
{
    FileHandling fh;
    fh.sortDescend();
    // fh.sortAscend();
}