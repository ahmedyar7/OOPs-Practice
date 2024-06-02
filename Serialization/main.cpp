#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Constructor:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    // Default Constuctor
    Person() {}

    // Serialize Function
    void serialize(ofstream &out)
    {
        size_t name_length = name.size();
        out.write(reinterpret_cast<const char *>(&name_length), sizeof(name_length));
        out.write(name.c_str(), name_length);
        out.write(reinterpret_cast<const char *>(&age), sizeof(age));
    }
    // Deserialize Function
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

class Man
{
public:
    string name;
    int age;

    Man(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Man() {}

    void serialize(ofstream &out)
    {
        size_t name_len = name.size();
        out.write(reinterpret_cast<const char *>(&name_len), sizeof(name));
        out.write(name.c_str(), name_len);
        out.write(reinterpret_cast<const char *>(&age), sizeof(age));
    }
    void deserialize(ifstream &in)
    {
        size_t name_len;
        in.read(reinterpret_cast<char *>(&name_len), sizeof(name_len));
        char *buffer = new char[name_len + 1];
        in.read(buffer, name_len);
        buffer[name_len] = '\0';
        name = buffer;
        delete[] buffer;
        in.read(reinterpret_cast<char *>(&age), sizeof(age));
    }
};

int main()
{
    Man m1("Ahmed", 23);
    // Serialize the object
    ofstream outFile("file.dat", ios::binary);
    if (outFile.is_open())
    {
        m1.serialize(outFile);
        outFile.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    Man m2("Yar", 223);
    // Serialize the object
    ifstream inFile("file.dat", ios::binary);
    if (inFile.is_open())
    {
        m2.deserialize(inFile);
        inFile.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }
    cout << "Name: " << m2.name << endl;
    cout << "Age: " << m2.age << endl;
}