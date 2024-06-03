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
        out.write(name.c_str(), sizeof(name));
        out.write(reinterpret_cast<const char *>(&age), sizeof(age));
    }
};
int main()
{
    Man m1(12, "Ahmed");
    ofstream outFile("file.dat");
    if (!outFile.is_open())
        cout << "Could not open the file";
    m1.serialize(outFile);
}
