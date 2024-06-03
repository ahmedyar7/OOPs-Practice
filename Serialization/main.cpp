#include <fstream>
#include <iostream>
using namespace std;
class Man
{
public:
    int age;
    string name;

    Man(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    Man() {}

    void serialize(ofstream &out)
    {
        size_t name_length = name.size();
        out.write(reinterpret_cast<const char *>(&name_length), sizeof(name));
        out.write(name.c_str(), name_length);
        out.write(reinterpret_cast<const char *>(&age), sizeof(age));
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
    Man m1(12, "Ahmed");
    ofstream outFile("file.dat");
    if (!outFile.is_open())
        cout << "Could not open the file";
    m1.serialize(outFile);
    outFile.close();

    Man m2(14, "Yar");
    ifstream inFile("file.dat");
    if (!inFile.is_open())
    {
        cout << "Couldnot Open the file" << endl;
    }
    inFile.close();
    m2.deserialize(inFile);
    cout << m2.name << " " << m2.age << endl;
}
