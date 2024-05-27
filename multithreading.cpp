#include <iostream>
#include <thread>
using namespace std;

void function_1();
void function_2();

int main()
{
    thread th1(function_1);
    thread th2(function_2);

    th1.join();
    th2.join();

    return 0;
}

void function_1()
{
    cout << "This is Function 1" << endl;
}
void function_2()
{
    cout << "This is function 2" << endl;
}