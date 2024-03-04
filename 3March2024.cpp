
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

    virtual int CalculateTax()
    {
        return 0;
    }

    virtual void DisplayInfo()
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
    Car(string makeVehicle, string vehicleModel, int vehicleYear, string fType, int numberDoors, string carColor) : Vehicle(makeVehicle, vehicleModel, vehicleYear, fType)
    {
        num_doors = numberDoors;
        color = carColor;
    }

    void DisplayInfo() override
    {
        Vehicle ::DisplayInfo();
        cout << "Number Of Doors: " << num_doors << endl;
        cout << "Color Of Car: " << color << endl;
    }

    int CalculateTax() override
    {
        return 0;
    }
};

class MotorCycle : public Vehicle
{

public:
    bool hasSideCar;
    string licenseType;

    MotorCycle(string makeVehicle, string vehicleModel, int vehicleYear, string fType, int numberDoors, string bikeLicense, bool sideCar) : Vehicle(makeVehicle, vehicleModel, vehicleYear, fType)
    {
        hasSideCar = sideCar;
        licenseType = bikeLicense;
    }

    void DisplayInfo() override
    {
        Vehicle ::DisplayInfo();
        cout << "License Type: " << licenseType << endl;
    }

    int CalculateTax() override
    {
        return 0;
    }
};

int main()
{
    Vehicle vehicle("Mercedes", "CD2023", 2004, "Petrol");
    Car car("Mercedes", "CD2023", 2004, "Petrol", 4, "Black");
    MotorCycle motorcycle("Mercedes", "CD2023", 2004, "Petrol", 4, "GPA-081", true);

    motorcycle.DisplayInfo();
}