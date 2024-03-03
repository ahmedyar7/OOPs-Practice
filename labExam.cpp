#include <iostream>
#include <string>
using namespace std;

class Student
{
    string names[100];
    int cms[100];
    int marks[100];
    static int number;

public:
    void getInfo(void);
    void printInfo(void);
};

void Student ::getInfo()
{
    cin >> names[number];
    cin >> cms[number];
    cin >> marks[number];
    number++;
}

void Student ::printInfo()
{
    cout << names[number] << endl;
    cout << cms[number] << endl;
    cout << marks[number] << endl;
}

int Student ::number;

int main()
{
    Student ahmed, ali;
    ahmed.getInfo();
    cout << endl;
    ahmed.printInfo();
    cout << endl;

    ali.getInfo();
    cout << endl;
    ali.printInfo();
    cout << endl;
}