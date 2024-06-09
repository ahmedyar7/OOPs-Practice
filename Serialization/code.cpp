#include <iostream>
#include <fstream>
using namespace std;

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

    // Methods:
    void serialize(ofstream &outFile)
    {

        size_t name_length = name.size();
        outFile.write(reinterpret_cast<const char *>(&name_length), sizeof(name_length));
        outFile.write(name.c_str(), name_length);
        outFile.write(reinterpret_cast<char *>(&age), sizeof(age));
    }

    void deserialize()
    {
    }
};