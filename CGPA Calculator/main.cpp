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
    Course(string name, int credits, char grades)
    {
        this->name = name;
        this->credits = credits;
        this->grades = grades;
    }
    // Getters
    string get_name() { return name; }
    int get_credits() { return credits; }
    char get_grades() { return grades; }
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
            return -1;
        }
    }

public:
    void add_courses(Course course)
    {
        courses.push_back(course);
    }

    float calculate_cgpa()
    {
        int total_credits = 0;
        float total_grade_point = 0;

        for (auto course : courses)
        {
            int grade_point = calculate_grade_point(course.get_grades());

            if (grade_point == -1)
            {
                cout << "Invalid Grade Point" << endl;
                continue;
            }

            total_credits += course.get_credits();
            total_grade_point += total_credits * course.get_credits();
        }

        if (total_credits == 0)
            cout << "No Course Found " << endl;

        return total_grade_point / total_credits;
    }
};

int main()
{
    cout << "Enter the total Number of Course: ";
    int num_courses;
    cin >> num_courses;

    Student student;

    for (int i = 0; i < num_courses; i++)
    {
        string name;
        int credits;
        char grades;

        cout << "Enter The Course Name" << i + 1 << ": ";
        cin >> name;

        cout << "Enter The Course's Credits" << i + 1 << ": ";
        cin >> credits;

        cout << "Enter The Course's Grade" << i + 1 << ": ";
        cin >> grades;
    }

    cout << "CGPA: " << student.calculate_cgpa();
}