#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

// void function_1()
// {
//     cout << "This is function 1" << endl;
// }
// void function_2()
// {
//     cout << "This is function 2" << endl;
// }

// int main()
// {
//     thread t1(function_1);
//     thread t2(function_2);

//     t1.join();
//     t2.join();
// }

mutex mux;
void threads_task()
{
    int shared_variable = 0;
    lock_guard<mutex> lock(mux);
    shared_variable++;
    cout << "Value of Shared Variable: " << shared_variable << endl;
}
int main()
{
    thread threads[5];
    for (int i = 0; i < 5; i++)
    {
        threads[i] = thread(threads_task);
    }
    for (int i = 0; i < 5; i++)
    {
        threads[i].join();
    }
}