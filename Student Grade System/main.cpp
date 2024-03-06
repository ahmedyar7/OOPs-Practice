#include <iostream>
#include <limits>
#include <sstream>
#include <fstream>
#include <windows.h>
using namespace std;

class Student
{

private:
    string name, grade, roll_number;

public:
    // Constructor
    Student() : name(""), grade(""), roll_number("") {}

    // Getters
    string getName()
    {
        return name;
    }
    string getGrade() { return grade; }
    string get_roll_number() { return roll_number; }

    // Setters
    string setName(string std_name) { std_name = name; }
    string setGrade(string std_grade) { std_grade = grade; }
    string set_roll_number(string std_roll_number) { std_roll_number = roll_number; }
};

// Driver Program
int main()
{
    Student s;

    bool is_on = true;
    while (is_on)
    {
        int value;

        cout << "Welcome to Student Report Card System \n";
        cout << endl;
        cout << "1. Report Card \n";
        cout << "2.Exit \n";

        cout << "Enter Choice: ";
        cin >> value;

        if (value == 1)
        {
            system("cls");
            string roll;
            string name;
            string grade;
            cout << "Enter Roll Number of Student: ";
            cin >> roll;
            s.set_roll_number(roll);
            cout << "Enter Name of Student: ";
            cin >> name;
            s.setName(name);

            int physics, computer, english;
            cout << "Enter Physics Marks: ";
            physics = getIntegerInput();
            cin >> physics;
            cout << "Enter Computer Marks: ";
            cin >> computer;
            cout << "Enter English Marks: ";
            cin >> english;
            system("cls");

            cout << "Student Report Card: \n\n";

            int totalMarks, averageMarks;
            totalMarks = physics + computer + english;
            cout << "Total Marks of Student: " << totalMarks << endl;
            averageMarks = totalMarks / 3;
            cout << "Average Marks of Student: " << averageMarks << endl;

            // Defining the Grades
            if (averageMarks >= 90 && averageMarks < 100)
                s.setGrade("A");
            if (averageMarks >= 80 && averageMarks < 90)
                s.setGrade("B");
            if (averageMarks >= 60 && averageMarks < 80)
                s.setGrade("C");
            if (averageMarks >= 80 && averageMarks <= 60)
                s.setGrade("D");
            else
                s.setGrade("F");

            cout << "Grades of Student: " << s.getGrade() << endl;

            ofstream out("Student.txt", ios::app);
            out << " " << s.get_roll_number() << " : " << s.getName() << " : " << s.getGrade() << endl
                << endl;
            out.close();

            cout << "Report Card Is Saved to file " << endl;
            Sleep(10000);
        }

        else if (value == 2)
        {
            system("cls");

            is_on = false;
            Sleep(30000);
        }
    }
}