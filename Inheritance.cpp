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

// #include <iostream>
// using namespace std;

// class Vehicle
// {
// private:
//     string brand;

// public:
//     Vehicle(string brand)
//     {
//         this->brand = brand;
//     }

//     virtual void details()
//     {
//         cout << "Brand Name: " << brand << endl;
//     }
// };

// class Car : public Vehicle
// {
// private:
//     int numOfWheels;

// public:
//     Car(string brand, int numOfWheels) : Vehicle(brand)
//     {
//         this->numOfWheels = numOfWheels;
//     }

//     void details() override
//     {
//         Vehicle ::details();
//         cout << "Number Of Wheels: " << numOfWheels << endl;
//     }
// };

// class ElectricCar : public Car
// {
// private:
//     int batteryCapicity;

// public:
//     ElectricCar(string brand, int numOfWheels, int batteryCapicity) : Car(brand, numOfWheels)
//     {
//         this->batteryCapicity = batteryCapicity;
//     }
//     void details() override
//     {
//         Car ::details();
//         cout << "Battery Capicity: " << batteryCapicity << endl;
//     }
// };

// int main()
// {
//     Vehicle v("Susuki");
//     cout << "Generic Car: " << endl;
//     v.details();

//     cout << endl;

//     Car car("Mecedes", 4);
//     cout << "Branded Car: " << endl;
//     car.details();

//     cout << "Electric Car: " << endl;
//     ElectricCar ev("Tesla", 4, 40000);
//     ev.details();
// }

/// Multiple inheritance in CPP

// #include <iostream>
// #include <string>
// using namespace std;

// class Animal
// {
// protected:
//     string name;

// public:
//     Animal(string name)
//     {
//         this->name = name;
//     }
//     virtual void speak()
//     {
//     }
// };
// class Flyable
// {
// public:
//     virtual void fly()
//     {
//     }
// };

// class Bird : public Animal, public Flyable
// {
// public:
//     Bird(string name) : Animal(name)
//     {
//         this->name = name;
//     }

//     void speak() override
//     {
//         Animal::speak();
//         cout << name << "Says Chirp, Chirp" << endl;
//     }

//     void fly() override
//     {
//         Flyable::fly();
//         cout << name << "Is flying" << endl;
//     }
// };
// int main()
// {
//     Bird bird("Sparrow");
//     bird.speak();
//     bird.fly();
// }

// #include <iostream>
// using namespace std;

// class Vehicle
// {
// protected:
//     string model;

// public:
//     Vehicle(string model)
//     {
//         this->model = model;
//     }
//     virtual void details()
//     {
//         cout << "Model: " << model << endl;
//     }
// };

// class Driveable
// {
// private:
// public:
//     void drive()
//     {
//         cout << "Driving the Vehical" << endl;
//     }
// };

// class Flyable
// {
// private:
// public:
//     void fly()
//     {
//         cout << "Vehical is Flying " << endl;
//     }
// };

// class FlyingCar : public Vehicle, public Flyable
// {
// private:
// public:
//     FlyingCar(string model) : Vehicle(model) {}

//     void details() override
//     {
//         Vehicle::details();
//         cout << "Type of Flying Car: " << endl;
//     }
// };

// int main()
// {
//     FlyingCar flyingCar("FutureFly");

//     cout << "Details of Flying Car: " << endl;

//     flyingCar.fly();
//     flyingCar.details();
// // }
// #include <iostream>
// using namespace std;

// class Person
// {
// protected:
//     string name;

// public:
//     Person(string name)
//     {
//         this->name = name;
//     }
//     virtual void displayDetails()
//     {
//         cout << "Name: " << name << endl;
//     }
// };
// class Student : public Person
// {
// private:
//     string studentID;

// public:
//     Student(string name, string studentID) : Person(name)
//     {
//         this->studentID = studentID;
//     }
// };

#include <iostream>
using namespace std;

class Account
{
protected:
    string accountNumber;
    double balance;

public:
    Account(string accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited $" << amount << " Into Account " << accountNumber << endl;
    }

    virtual bool withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount $" << amount << "Withdrawn from account " << accountNumber << endl;
            return true;
        }
        else
        {
            cout << "Isuffient Balance " << endl;
            return false;
        }
    }

    virtual void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance $" << balance << endl;
    }
};

class SavingAccount : public Account
{
private:
    double interestRate;

public:
    // Constructor
    SavingAccount(string accountNumber, double balance, double interestRate) : Account(accountNumber, balance)
    {
        this->interestRate = interestRate;
    }
};
