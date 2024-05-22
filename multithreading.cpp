#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter(0);

void incrementCounter()
{
    counter++;
}

int main()
{
    // Create multiple threads to increment the counter
    std::thread threads[5];
    for (int i = 0; i < 5; ++i)
    {
        threads[i] = std::thread(incrementCounter);
    }

    // Join all the threads to wait for their completion
    for (int i = 0; i < 5; ++i)
    {
        threads[i].join();
    }

    // Output the final value of the counter
    std::cout << "Final value of counter: " << counter << std::endl;

    return 0;
}
