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

int main()
{

    Animal a1("Mammals", 14);

    a1.details();
    a1.show();

    Cat c1("PersianCat", 43, "Ushna");
    c1.details();
    c1.show();
    // Base b1;
    // b1.show(); // Base class function called

    // Derived d1;
    // d1.show(); // Derived class function called ;
}