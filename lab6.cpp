#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string color;
    string type;

public:
    Animal(string animalName, string animalColor, string animalType)
    {
        name = animalName;
        color = animalColor;
        type = animalType;
    }
    // Member Function
    virtual void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Type: " << type << endl;
    }
};

class Cats : public Animal
{
private:
public:
    Cats(string animalName, string animalColor, string animalType) : Animal(animalName, animalColor, animalType)
    {
    }
    void displayInfo()
    {
        Animal ::displayInfo();
    }
    void meow()
    {
        cout << "MEOWNNNNN" << endl;
    }
};

class Dogs : public Animal
{
private:
    string breed;

public:
    Dogs(string animalName, string animalColor, string animalType, string dogBreed) : Animal(animalName, animalColor, animalType)
    {
        breed = dogBreed;
    }
    void displayInfo() override
    {
        Animal::displayInfo();
        cout << "Breed: " << breed << endl;
    }
    void bark()
    {
        cout << "Woof " << endl;
    }
};

int main()
{
    // Dogs dog("Tommy", "Brown", "Mammal", "German Sheperd");
    // dog.displayInfo();
    // dog.bark();

    Cats cat("Kitty", "White", "Mammal");
    cat.displayInfo();
    cat.meow();
}