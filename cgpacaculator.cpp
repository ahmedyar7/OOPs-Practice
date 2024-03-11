#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Course
{
private:
    string name;
    int credits;
    char grades;

public:
    // Constructor
    Course(string name, int credits, char grades)
    {
        this->name = name;
        this->credits = credits;
        this->grades = grades;
    }
    // Getter Function
    string get_name() { return name; }
    int get_credits() { return credits; }
    char get_grade() { return grades; }
};

class Student
{
private:
    vector<Course> courses;

    int calculate_grade_point(char grades)
    {
        switch (grades)
        {
        case 'A':
            return 4;
        case 'B':
            return 3;
        case 'C':
            return 2;
        case 'D':
            return 1;
        case 'F':
            return 0;
        default:
            return 0;
        }
    }

public:
    void add_courses(Course course)
    {
        courses.push_back(course);
    }
    // Function to Calculate CGPA
    float calculate_cgpa()
    {
        int total_credits = 0;
        float total_grade_point = 0;

        for (auto course : courses)
        {
            int grade_points = calculate_grade_point(course.get_grade());

            if (grade_points == -1)
            {
                cout << "Invalid Entry" << endl;
                continue;
            }

            total_credits += course.get_credits();
            total_grade_point += grade_points * course.get_credits();
        }
        if (total_credits == 0)
        {
            cout << "No Courses Found" << endl;
            return 0;
        }

        return total_grade_point / total_credits;
    }
};

// Drivers Program
int main()
{
    cout << "Number of Courses: ";
    int num_courses;
    cin >> num_courses;

    Student student;

    // Input Course Detail
    for (int i = 0; i < num_courses; i++)
    {
        string name;
        int credits;
        char grades;

        cout << "Enter the name of Your Course: " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the Credits of Your Course: " << i + 1 << ": ";
        cin >> credits;

        cout << "Enter the Grade of Your Course: " << i + 1 << ": "
             << "{A,B,C,D,F} ";
        cin >> grades;

        Course course(name, credits, grades);
        student.add_courses(course);
    }
    // Calculating the final cgpa
    cout << "CGPA: " << student.calculate_cgpa() << endl;
}