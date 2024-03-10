// #include <iostream>
// using namespace std;

// class Base
// {
//     protected:
//     int a;
//     private:
//     int b;
// };
// // For a protected memeber
// // 1. Private:
// //

// class Derived
// {
// };

// int main()
// {
//     return 0;
// }

// Multilevel inheritance in CPP

#include <iostream>
using namespace std;

class Student
{
protected:
    int rollnumber;

public:
    // Setters
    void set_rollnumber(int roll_number) { rollnumber = roll_number; }
    // Getters
    int get_rollnumber() { return rollnumber; }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float maths_marks, float physics_marks)
    {
        maths = maths_marks;
        physics = physics_marks;
    }
    float get_marks()
    {
        return maths;
        return physics;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_rollnumber();
        get_marks();
        double percentAge = ((maths + physics) / 2);
        cout << "Your Percentage is " << percentAge << "%" << endl;
    }
};

int main()
{
    Result ahmed;
    ahmed.set_rollnumber(420);
    ahmed.set_marks(99, 100);
    ahmed.display();
}
