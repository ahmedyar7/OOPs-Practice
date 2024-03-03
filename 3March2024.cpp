
#include <iostream>
using namespace std;

class Vehicle
{

public:
    string make;
    string model;
    int year;
    string fuelType;
    Vehicle(){};
    Vehicle(string makeVehicle, string vehicleModel, int vehicleYear, string fType)
    {
        make = makeVehicle;
        model = vehicleModel;
        year = vehicleYear;
        fuelType = fType;
    }

    void DisplayInfo()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle
{
public:
    int num_doors;
    string color;

    // Defining the constructor
    Car(string makeVehicle, string vehicleModel, int vehicleYear, string fType) : Vehicle(makeVehicle, vehicleModel, vehicleYear, fType){};

    void DisplayInfo()
    {
        cout << "Number Of Doors: " << num_doors << endl;
        cout << "Color Of Car: " << color << endl;
    }
};

class MotorCycle : public Vehicle
{

public:
    bool hasSideCar;
    string licenseType;

    void DisplayInfo()
    {
        cout << "License Type: " << licenseType << endl;
    }
};

int main()
{
    Vehicle vehicle("Mercedes", "CD2023", 2004, "Petrol");
    Car car;
    MotorCycle motorcycle;

    vehicle.DisplayInfo();
    cout << endl;
    car.DisplayInfo();
    cout << endl;
    motorcycle.DisplayInfo();
}