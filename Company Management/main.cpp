#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int employeeID;
    double baseSalary;

public:
    Employee(string name, int employeeID, double baseSalary)
    {
        this->name = name;
        this->employeeID = employeeID;
        this->baseSalary = baseSalary;
    }

    virtual double calcTotalEarning()
    {
        return baseSalary;
    }

    void show_detail() const
    {
        cout << "Name: " << name << endl;
        cout << "EmployeeID: " << employeeID << endl;
        cout << "Base Salary: " << baseSalary << endl;
    }
};

class RegularEmployee : public Employee
{
public:
    // Inherited Constructor
    RegularEmployee(string name, int employeeID, double baseSalary) : Employee(name, employeeID, baseSalary){};
};

class Manager : public Employee
{
private:
    double bonus_percentage;

public:
    Manager(string name, int employeeID, double baseSalary, double bonus_percentage) : Employee(name, employeeID, baseSalary)
    {
        this->bonus_percentage = bonus_percentage;
    }

    // Override the function
    double calcTotalEarning() override
    {
        Employee::calcTotalEarning();
        return baseSalary + (baseSalary + (bonus_percentage / 100.00));
    }
};

class Executive : public Employee
{
private:
    double bonus_percentage;
    int stock_options;

public:
    // Inherited Construtor:
    Executive(string name, int employeeID, double baseSalary, double bonus_percentage, int stock_options) : Employee(name, employeeID, baseSalary)
    {
        this->bonus_percentage = bonus_percentage;
        this->stock_options = stock_options;
    }
    // override the function
    double calcTotalEarning() override
    {
        Employee::calcTotalEarning();
        return baseSalary + (baseSalary + (bonus_percentage / 100.00) + stock_options * 1000);
    }
};

int main()
{
    // Creating differnt kind of employee
    Employee regular_employee("Ahmed", 1, 100.00);
    Manager manager("Yar", 2, 100.00, 50.00);
    Executive executive("Shees", 3, 100.00, 20.00, 5);

    // Regular Employee Details
    regular_employee.show_detail();
    cout << "Total Earnings: $" << regular_employee.calcTotalEarning() << endl;
    cout << endl;

    // Manager  Details
    manager.show_detail();
    cout << "Total Earnings: $" << manager.calcTotalEarning() << endl;
    cout << endl;

    // Executive Details
    executive.show_detail();
    cout << "Total Earnings: $" << executive.calcTotalEarning() << endl;
    cout << endl;
}