
#include <iostream>
using namespace std;

class Vehicle
{

public:
    string make;
    string model;
    int year;

    Vehicle(string makeVehicle, string vehicleModel, int vehicleYear)
    {
        make = makeVehicle;
        model = vehicleModel;
        year = vehicleYear;
    }

    void DisplayInfo()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};