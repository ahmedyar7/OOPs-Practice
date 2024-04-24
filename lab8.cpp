// #include <iostream>
// using namespace std;

// class Drawable
// {
// public:
//     virtual void draw() const = 0;
// };

// class Circle : public Drawable
// {
// public:
//     void draw() const override
//     {
//         cout << "This is inherited virtual function that is overriden" << endl;
//     }
// };
// int main()
// {
//     Circle circle;
//     circle.draw();
// }
#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() const = 0;
    void stop() const
    {
        cout << "Car has stopped" << endl;
    }
};

class Car : public Vehicle
{
public:
    void start() const override
    {
        cout << "Car has started" << endl;
    }
};
int main()
{
    Car car;
    car.start();
    car.stop();
}