// // Write a C++ program that reads a list of integers from a file and calculates their sum

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("example.txt");

    int numbers;
    int sum = 0;

    while (file >> numbers)
    {
        sum += numbers;
    }
    cout << sum << endl;
}

// Program to calculate the average grade of the student and then write the grade in to another file from the computer
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3, 2};
    int n = sizeof(array) / sizeof(array[0]);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum += array[i];
    }
    // Writing the the file
    ofstream in("example.txt");
    in << sum;
    cout << sum << endl;
}

// Printing name from the file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    ifstream file("example.txt");
    while (getline(file, str))
    {
        cout << str << endl;
    }
}