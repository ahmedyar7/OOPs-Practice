// #include <iostream>
// using namespace std;

// class Employee
// {
// protected:
//     string name;
//     int employeeID;
//     double salary;

// public:
//     // Constructor
//     Employee(string name, int employeeID, double salary)
//     {
//         this->name = name;
//         this->employeeID = employeeID;
//         this->salary = salary;
//     }
//     // Methods
//     virtual void display_info()
//     {
//         cout << "Name: " << name << endl;
//         cout << "EmployeeID: " << employeeID << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// class Manager : public Employee
// {
// protected:
//     int teamSize;

// public:
//     Manager(string name, int employeeID, double salary, int teamSize) : Employee(name, employeeID, salary)
//     {
//         this->teamSize = teamSize;
//     }
//     // Method overriding
//     void display_info() override
//     {
//         Employee ::display_info();
//         cout << "Team Size: " << teamSize << endl;
//     }
// };

// class Executive : public Manager
// {
// private:
//     string department;

// public:
//     Executive(string name, int employeeID, double salary, string department) : Manager(name, employeeID, salary, teamSize)
//     {
//         this->department = department;
//     }
//     // overriding the function
//     void display_info() override
//     {
//         Employee ::display_info();
//         cout << "Department: " << department << endl;
//     }
// };

// class Worker : public Employee
// {
// private:
//     string roll;

// public:
//     Worker(string name, int employeeID, double salary, string roll) : Employee(name, employeeID, salary)
//     {
//         this->roll = roll;
//     }
//     // overriding the function
//     void display_info() override
//     {
//         Employee ::display_info();
//         cout << "Roll: " << roll << endl;
//     }
// };

// // Driver Program
// int main()
// {
//     Employee employee("Ahmed Yar", 101, 1000.0);
//     Manager manager("Umar Malik", 102, 20000, 5);
//     Executive executive("Asjad Kashif", 103, 300000.0, "Computer Science");
//     Worker worker("Ahmed", 104, 9000, "Swepper");

//     // Employee Info
//     employee.display_info();
//     cout << endl;

//     // Manager Info
//     manager.display_info();
//     cout << endl;

//     // Executive Info
//     executive.display_info();
//     cout << endl;

//     // Worker Info
//     worker.display_info();
//     cout << endl;
// }

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double area();
    virtual double volume();
    virtual void displayInfo();
};

class TwoDimensionalShape : public Shape
{
public:
    virtual double perimeter();
};

class ThreeDimensionalShape : public Shape
{
    virtual double surfaceArea();
};

class Circle : public TwoDimensionalShape
{
private:
    double radius;

public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    // overriding the function
    double area() override
    {
        Shape::area();
        return M_PI * radius * radius;
    }
    double perimeter() override
    {
        TwoDimensionalShape::perimeter();
        return M_PI * radius * 2;
    }
    void displayInfo() override
    {
        Shape::displayInfo();

        cout << "Circle: " << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
};