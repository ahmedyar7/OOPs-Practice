// #include <iostream>
// using namespace std;

// int main()
// {
//     int age = 20;
//     try
//     {
//         if (age >= 24)
//         {
//             cout << "You have the access to drink the alcohol";
//         }
//         else
//         {
//             throw(age);
//         }
//     }
//     catch (int age)
//     {
//         cout << "you donot have the access to drink the alcohol" << endl;
//         cout << "You age is " << age << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int num;
    int denum;
    int output;

    cout << "Enter the number for the divison: ";
    cin >> num;
    cin >> denum;

    try
    {
        if (denum == 0)
        {
            throw denum;
        }
        else
        {
            output = num / denum;
        }
    }
    catch (int d)
    {
        cout << "You cannot enter zero in denominator beacause this will give the undefined terms \n";
    }
}