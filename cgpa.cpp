#include <iostream>
#include <vector>

using namespace std;

class Courses
{
private:
    string name;
    int creditHours;
    float grade;

public:
    Courses(string name, int creditHours, float grade)
    {
        this->name = name;
        this->creditHours = creditHours;
        this->grade = grade;
    }

    // * Setters
    void setName(string n) { name = n; }
    void setCreditHours(int hours) { creditHours = hours; }
    void setGrade(float g) { grade = g; }

    // * Getters:
    string getName() { return name; }
    int getCreditHours() { return creditHours; }
    float getGrade() { return grade; }

    float getGradePoint()
    {
        return grade * creditHours;
    }
};

class Semester
{
private:
    vector<Courses> courses;

public:
    void addCourse(Courses &course)
    {
        courses.push_back(course);
    }

    float calculateTotalGradePoint() const
    {
        float total = 0.0;
        for (const Courses &course : courses)
        {
            total += courses.getGradePoint();
        }
        return total;
    }
};