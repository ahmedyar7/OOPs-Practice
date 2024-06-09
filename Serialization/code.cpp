#include <iostream>
#include <fstream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person() {}
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    // Methods:
    void serialize(ofstream &outFile)
    {
        size_t name_length = name.size();
        outFile.write(reinterpret_cast<const char *>(&name_length), sizeof(name_length)); // Corrected size
        outFile.write(name.c_str(), name_length);
        outFile.write(reinterpret_cast<const char *>(&age), sizeof(age));
    }

    void deserialize(ifstream &inFile)
    {
        size_t name_length;
        inFile.read(reinterpret_cast<char *>(&name_length), sizeof(name_length));
        char *buffer = new char[name_length + 1];
        inFile.read(buffer, name_length);
        buffer[name_length] = '\0';
        name = buffer;
        delete[] buffer;
        inFile.read(reinterpret_cast<char *>(&age), sizeof(age));
    }

    void print() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Man
{
private:
    string name;
    int age;

public:
    Man() {}
    Man(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void serialize(ofstream &out)
    {
        size_t name_length = name.size();
        out.write(reinterpret_cast<const char *>(&name_length), sizeof(name_length));
        out.write(name.c_str(), name_length);
        out.write(reinterpret_cast<char *>(&age), sizeof(age));
    }

    void deserialize(ifstream &in)
    {
        size_t name_length;
        in.read(reinterpret_cast<char *>(&name_length), sizeof(name_length));
        char *buffer = new char[name_length + 1];
        in.read(buffer, name_length);
        buffer[name_length] = '\0';
        name = buffer;
        delete[] buffer;
        in.read(reinterpret_cast<char *>(&age), sizeof(age));
    }
};
int main()
{
    Man m1("Ahmed ", 122);
    ofstream outfile("file.dat", ios::binary);
    m1.serialize(outfile);
    outfile.close();

    Man m2("Yar", 123);
    ifstream inFile("file.dat", ios::binary);
    m2.deserialize(inFile);
    inFile.close();
}
