#include <iostream>
using namespace std;

int main()
{
    int age = 20;
    try
    {
        if (age >= 24)
        {
            cout << "You have the access to drink the alcohol";
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {
        cout << "you donot have the access to drink the alcohol" << endl;
        cout << "You age is " << age << endl;
    }
    return 0;
}