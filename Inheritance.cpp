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

// #include <iostream>
// using namespace std;

// class Account
// {
// protected:
//     string accountNumber;
//     double balance;

// public:
//     Account(string accountNumber, double balance)
//     {
//         this->accountNumber = accountNumber;
//         this->balance = balance;
//     }

//     void deposit(double amount)
//     {
//         balance += amount;
//         cout << "Deposited $" << amount << " Into Account " << accountNumber << endl;
//     }

//     virtual bool withdraw(double amount)
//     {
//         if (balance >= amount)
//         {
//             balance -= amount;
//             cout << "Amount $" << amount << "Withdrawn from account " << accountNumber << endl;
//             return true;
//         }
//         else
//         {
//             cout << "Isuffient Balance " << endl;
//             return false;
//         }
//     }

//     virtual void display()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance $" << balance << endl;
//     }
// };

// class SavingAccount : public Account
// {
// private:
//     double interestRate;

// public:
//     // Constructor
//     SavingAccount(string accountNumber, double balance, double interestRate) : Account(accountNumber, balance)
//     {
//         this->interestRate = interestRate;
//     }

//     void addIntrest()
//     {
//         balance += balance * interestRate;
//         cout << "Added Intrest to Account " << accountNumber << endl;
//     }
//     void display() override
//     {
//         Account::display();
//         cout << "Intrest Rate: " << interestRate * 100 << "%" << endl;
//     }
// };

// class CheckingAccount : public Account
// {
// private:
//     double overdraftLimit;

// public:
//     // Constructor
//     CheckingAccount(string accountNumber, double balance, double overdraftLimit) : Account(accountNumber, balance)
//     {
//         this->overdraftLimit = overdraftLimit;
//     }

//     bool withdraw(double amount) override
//     {
//         if (balance + overdraftLimit >= amount)
//         {
//             balance -= amount;
//             cout << "Withdrawn $" << amount << "From account " << accountNumber << endl;
//             return true;
//         }
//         else
//         {
//             cout << "Transaction is not possible " << endl;
//             return false;
//         }
//     }
//     void display() override
//     {
//         Account::display();
//         cout << "OverDraft Limit $" << overdraftLimit << endl;
//     }
// };

// class CreditAccount : public Account
// {
// private:
//     double creditLimit;

// public:
//     CreditAccount(string accountNumber, double balance, double creditLimit) : Account(accountNumber, balance)
//     {
//         this->creditLimit = creditLimit;
//     }

//     bool withdraw(double amount)
//     {
//         if (balance + creditLimit >= amount)
//         {
//             balance -= amount;
//             cout << "Withdrawn $" << amount << "From account " << accountNumber << endl;
//             return true;
//         }
//         else
//         {
//             cout << "Transaction is not possible " << endl;
//             return false;
//         }
//     }
//     // * overriding the display Function
//     void display() override
//     {
//         Account::display();
//         cout << "Acccount Credit Limit " << creditLimit << endl;
//     }
// };
// int main()
// {
//     SavingAccount savings("88891", 5000, 0.05);
//     CheckingAccount checking("99993", 3000, 1000);
//     CreditAccount credit("12314", 4000, 5000);

//     cout << "Saving Account information " << endl;
//     savings.display();
//     std::cout << "Savings Account Information:" << std::endl;
//     savings.display();
//     std::cout << std::endl;

//     std::cout << "Checking Account Information:" << std::endl;
//     checking.display();
//     std::cout << std::endl;

//     std::cout << "Credit Account Information:" << std::endl;
//     credit.display();
//     std::cout << std::endl;

//     // Perform operations on accounts
//     savings.deposit(1000);
//     // savings.addInterest();
//     savings.withdraw(2000);
//     std::cout << std::endl;

//     checking.deposit(500);
//     checking.withdraw(4000);
//     std::cout << std::endl;

//     credit.deposit(1000);
//     credit.withdraw(7000);
//     std::cout << std::endl;

//     return 0;
// }

// Create a base class Employee with properties name and salary.Derive two classes Manager and Worker from Employee.Implement a virtual function calculateBonus() in Employee which returns 0.0, override this function in Manager to calculate a bonus based on the salary and in Worker to return a fixed bonus amount.

// #include <iostream>
// using namespace std;

// class Employee
// {
// protected:
//     string name;
//     int salary;

// public:
//     Employee(string name, int salary)
//     {
//         this->name = name;
//         this->salary = salary;
//     }
//     void displayDetails()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Salary: " << salary << endl;
//     }
//     virtual int calculateBonus()
//     {
//         return 0;
//     }
// };
// class Manager : public Employee
// {
// private:
//     double bonus;

// public:
//     Manager(string name, int salary, double bonus) : Employee(name, salary)
//     {
//         this->bonus = bonus;
//     }
//     int calculateBonus() override
//     {
//         Employee::calculateBonus();
//         salary += salary * bonus / 100;
//         return salary;
//     }
// };
// class Worker : public Employee
// {
// private:
//     double bonus;

// public:
//     Worker(string name, int salary) : Employee(name, salary)
//     {
//         this->bonus = 20;
//     }
//     int calculateBonus() override
//     {
//         Employee::calculateBonus();
//         salary += salary * bonus / 100;
//         return salary;
//     }
// };

// int main()
// {

//     Employee emp("Ahmed", 12000);
//     emp.displayDetails();

//     Manager manager("Yar", 12000, 50);
//     cout << "Salary After the variable bounus: " << manager.calculateBonus() << endl;

//     Worker worker("Yar", 12000);
//     cout << "Salary After the variable bounus: " << worker.calculateBonus() << endl;

//     return 0;
// }

// Define a base class Animal with properties species and sound. Derive two classes Bird and Mammal from Animal. Implement pure virtual functions fly() and makeSound() in Bird and Mammal respectively. Derive classes Eagle and Dog from Bird and Mammal and implement these functions accordingly.

// #include <iostream>
// using namespace std;

// class Animal
// {
// protected:
//     string species;
//     string sound;

// public:
//     Animal(){};
//     Animal(string species, string sound)
//     {
//         this->sound = sound;
//         this->species = species;
//     }
// };

// class Bird : public Animal
// {
// public:
//     Bird(){};
//     virtual void fly()
//     {
//     }
// };

// class Mammal : public Animal
// {
// public:
//     Mammal(){};
//     virtual void makesound()
//     {
//     }
// };

// class Eagle : public Bird
// {
// public:
//     Eagle(){};
//     void fly() override
//     {
//         Bird ::fly();
//         cout << "Eagle is flygin ";
//     }
// };

// class Tiger : public Mammal
// {
// public:
//     Tiger(){};
//     void makesound() override
//     {
//         Mammal::makesound();
//         cout << "ROAR" << endl;
//     }
// };

// int main()
// {
//     Animal am("bird", "ow ow");

//     Tiger ti;
//     ti.makesound();

//     Eagle b;
//     b.fly();

//     return 0;
// }

// * Multiple Inheritance in cpp
// #include <iostream>
// using namespace std;

// class Character
// {
// public:
//     virtual void attack(){};
// };

// class SpecialTrait
// {
// public:
//     void useSpecial()
//     {
//         cout << "Using Special Traits" << endl;
//     }
// };

// class Warrior : public Character
// {
// public:
//     void attack() override
//     {
//         Character::attack();
//         cout << "Warrior attack with the sword" << endl;
//     }
// };

// class Mage : public Character, public SpecialTrait
// {
// public:
//     void attack() override
//     {
//         cout << "Mage Cast fire" << endl;
//     }
// };

// int main()
// {
//     Warrior war;
//     war.attack();

//     Mage mage;
//     mage.attack();
// }

// * Project Related To multilevel Inheritance in cpp
#include <iostream>
using namespace std;

class User
{
protected:
    string userName;
    bool loggedIn;

public:
    User(string userName)
    {
        this->userName = userName;
    }

    void login()
    {
        loggedIn = true;
        cout << "User: " << userName << " logged IN " << endl;
    }

    void logout()
    {
        loggedIn = false;
        cout << "User " << userName << " logged out " << endl;
    }
};

class Student : public User
{
public:
    Student(string userName) : User(userName) {}

    void borrowBook(const string &book)
    {
        if (loggedIn)
        {
            cout << "User " << userName << " borrowed Book " << endl;
        }
        else
            cout << "Please login to borrow book " << endl;
    }
};

class Faculty : public User
{
public:
    Faculty(string userName) : User(userName) {}

    void bookRecommendation(const string &book)
    {
        if (loggedIn)
        {
            cout << "Faculty " << userName << " Recomendation list " << endl;
        }
        else
            cout << "Please login to get the book recommendation " << endl;
    }
};

class Librarian : public User
{
public:
    Librarian(string &userName) : User(userName)
    {
    }

    void addBook(string &book)
    {
        if (loggedIn)
        {
            cout << "Librirain " << userName << " just added " << book << endl;
        }
        else
            cout << "Please login to add books " << endl;
    }
};

int main()
{
    Student s1("35324");
    s1.login();
    s1.borrowBook("Fundamental of programming");
    s1.logout();

    Faculty f("1231");
    f.login();
    f.bookRecommendation("Linear Algebra");
}