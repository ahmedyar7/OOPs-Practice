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
        in.read(reinterpret_cast<char *>(name_length), sizeof(name_length));
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
    Person p1("Ahmed", 30);

    // Serialze object to the file.
    ofstream writeFile("file.txt", ios::binary);
    if (writeFile.is_open())
    {
        p1.serialize(writeFile);
        writeFile.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }

    // Deserialze the object;
    Person p2("Yar", 80);
    ifstream readFile("file.txt", ios::binary);
    if (readFile.is_open())
    {
        p2.deserialize(readFile);
        readFile.close();
    }
    else
    {
        cout << "Could not open the file" << endl;
    }
    cout << "Name: " << p2.name << " Age: " << p2.age;
}