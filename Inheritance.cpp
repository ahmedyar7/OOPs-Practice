// #include <iostream>
// #include <cmath>
// using namespace std;

// class Shape
// {
// public:
//     virtual int area() const = 0;
//     virtual int parimeter() const = 0;
// };

// class Rectangle : public Shape
// {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }

//     int area() const override
//     {

//         return length * width;
//     }
//     int parimeter() const override
//     {
//         return 2 * (length + width);
//     }
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double radius)
//     {
//         this->radius = radius;
//     }

//     int area() const override
//     {
//         return M_PI * radius * radius;
//     }

//     int parimeter() const override

//     {
//         return 2 * (M_PI * radius);
//     }
// };

// int main()
// {
//     Rectangle rec1(12, 112);
//     cout << "Area of Rectangle: " << rec1.area() << endl;
//     cout << "Perimter of Rectangle: " << rec1.parimeter() << endl;

//     Circle cir(112);
//     cout << "Area of Rectangle: " << cir.area() << endl;
//     cout << "Perimter of Rectangle: " << cir.parimeter() << endl;
// }

/// Multilevel inheritance

#include <iostream>
using namespace std;

class Vehicle
{
private:
    string brand;

public:
    Vehicle(string brand)
    {
        this->brand = brand;
    }

    virtual void details()
    {
        cout << "Brand Name: " << brand << endl;
    }
};

class Car : public Vehicle
{
private:
    int numOfWheels;

public:
    Car(string brand, int numOfWheels) : Vehicle(brand)
    {
        this->numOfWheels = numOfWheels;
    }

    void details() override
    {
        Vehicle ::details();
        cout << "Number Of Wheels: " << numOfWheels << endl;
    }
};

class ElectricCar : public Car
{
private:
    int batteryCapicity;

public:
    ElectricCar(string brand, int numOfWheels, int batteryCapicity) : Car(brand, numOfWheels)
    {
        this->batteryCapicity = batteryCapicity;
    }
    void details() override
    {
        Car ::details();
        cout << "Battery Capicity: " << batteryCapicity << endl;
    }
};

int main()
{
    Vehicle v("Susuki");
    cout << "Generic Car: " << endl;
    v.details();

    cout << endl;

    Car car("Mecedes", 4);
    cout << "Branded Car: " << endl;
    car.details();

    cout << "Electric Car: " << endl;
    ElectricCar ev("Tesla", 4, 40000);
    ev.details();
}