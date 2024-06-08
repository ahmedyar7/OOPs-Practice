#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

void function_1()
{
    cout << "This is function 1" << endl;
}
void function_2()
{
    cout << "This is function 2" << endl;
}

int main()
{
    thread t1(function_1);
    thread t2(function_2);

    t1.join();
    t2.join();
}