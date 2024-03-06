// Write a C++ program that reads a list of integers from a file and calculates their sum

#include <iostream>
#include <fstream>
using namespace std;

// int main()
// {
//     ifstream file("example.txt");

//     int numbers;
//     int sum = 0;

//     while (file >> numbers)
//     {
//         sum += numbers;
//     }
//     cout << sum << endl;
// }

int main()
{
    ifstream file("example.txt");

    if (!file)
    {
        cerr << "Error Opening the file. " << endl;
        return 1;
    }
}
