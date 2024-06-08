#include <iostream>
using namespace std;

class Base
{
private:
public:
    virtual void show()
    {
        cout << "This is the base class function called" << endl;
    }
};
class Derived : public Base
{
public:
    void show() override
    {
        cout << "This is the derived class function" << endl;
    }
};

class Animal
{
private:
    string species;
    int age;

public:
    Animal(string species, int age)
    {
        this->species = species;
        this->age = age;
    }

    virtual void details()
    {
        cout << "This is the Animal classes function called" << endl;
    }

    virtual void show()
    {
        cout << "Species: " << species << endl;
        cout << "Age: " << age << endl;
    }
};

class Cat : public Animal
{
private:
    string name;

public:
    Cat(string species, int age, string name) : Animal(species, age)
    {
        this->name = name;
    }
    void details() override
    {
        cout << "This is derived class function" << endl;
    }

    virtual void show()
    {
        Animal::show();
        cout << "Species: " << name << endl;
    }
};

// # --------------------------------------                Virtual Classes                 ------------------------------------------------------------------

class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void displayPersonInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person
{
private:
    string major;

public:
    Student(const string &name, const int &age, const string &major) : Person(name, age)
    {
        this->major = major;
    }
    void displayStudentInfo()
    {
        cout << "Major: " << major << endl;
    }
};

class Employee : virtual public Person
{
private:
    string jobTitle;

public:
    Employee(const string &name, const int &age, const string &jobTitle) : Person(name, age)
    {
        this->jobTitle = jobTitle;
    }

    void displayEmployeeInfo()
    {
        cout << "JobTitle: " << jobTitle << endl;
    }
};

class WorkingStudent : public Student, public Employee
{
private:
public:
    WorkingStudent(const string &name, const int &age, const string &major, const string &jobTitle) : Person(name, age), Student(name, age, major), Employee(name, age, jobTitle) {}

    void displayWorkingStudentInfo()
    {
        displayPersonInfo();
        displayStudentInfo();
        displayEmployeeInfo();
    }
};

class PureVirtualClass
{
private:
public:
    virtual void show() = 0;
};

class DerivedVirtualClass : public PureVirtualClass
{
private:
public:
    void show() override
    {
        cout << "This is overriden virtual classes" << endl;
    }
};

int main()
{
    DerivedVirtualClass cs;
    cs.show();
}