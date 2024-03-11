#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int legs;

public:
    Animal(){};
    Animal(string name, int legs)
    {
        this->name = name;
        this->legs = legs;
    }

    virtual void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Number of Legs: " << legs << endl;
    }
};

class Mammals : public Animal
{
private:
    bool breast_feed;

public:
    Mammals(){};
    Mammals(string name, int legs, bool breast_feed) : Animal(name, legs)
    {
        this->breast_feed = breast_feed;
    }
    // Method Overrideing
    void displayInfo() override
    {
        Animal::displayInfo();
        cout << "Breast Feed: " << breast_feed << endl;
    }
};

class Humans : public Mammals
{
public:
    void displayInfo() override
    {
        Mammals::displayInfo();
        cout << "I'am a human Being" << endl;
    }
};

int main()
{
    Animal animal("Gorilla", 3);
    Mammals mammals("Gorilla", 3, true);
    Humans humans;
    humans.displayInfo();
}