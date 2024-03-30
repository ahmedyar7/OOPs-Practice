// Create a class representing a bank account with attributes like account number, balance, owner name, etc. Implement methods for deposit, withdrawal, and displaying the account details.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     int accountNumber;
//     double balance;
//     string ownerName;

// public:
//     BankAccount(int accountNumber, double balance, string ownerName)
//     {
//         this->accountNumber = accountNumber;
//         this->balance = balance;
//         this->ownerName = ownerName;
//     }
//     // * Methods:

//     void displayDetails()
//     {
//         cout << "Account Number: " << accountNumber << endl;
//         cout << "Balance: " << balance << endl;
//         cout << "Account Owner: " << ownerName << endl;
//     }

//     void deposit(double amount)
//     {
//         balance += amount;
//         cout << "Updated Balance: " << balance << endl;
//     }
//     void withdrawl(double amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//             cout << "Updated Balance: " << balance << endl;
//         }
//         else
//         {
//             cout << "This transaction is not possible" << endl;
//         }
//     }
// };

// int main()
// {
//     BankAccount acc1(123, 1000.0, "Ahmed Yar");
//     acc1.displayDetails();

//     acc1.deposit(200.00);

//     acc1.withdrawl(100.00);
// }

// Design a class to represent a library book with attributes like title, author, ISBN, etc. Implement methods for checking out a book, returning a book, and displaying book details.

// #include <iostream>
// using namespace std;

// class Library
// {
// private:
//     string title;
//     string author;
//     int isbn;
//     bool checkout;

// public:
//     Library(string title, string author, int isbn)
//     {
//         this->title = title;
//         this->author = author;
//         this->isbn = isbn;
//         this->checkout = false;
//     }

//     // * Methods:

//     void displayDetails()
//     {
//         cout << "Book Title: " << title << endl;
//         cout << "Book Author: " << author << endl;
//         cout << "ISBN Number: " << isbn << endl;
//     }

//     void borrowed()
//     {
//         if (!checkout)
//         {
//             checkout = true;
//             cout << "The book has been checked out " << endl;
//         }
//         else
//             cout << "The book has not been checkedout " << endl;
//     }

//     void returned()
//     {
//         if (checkout)
//         {
//             checkout = false;
//             cout << "The book has been returned " << endl;
//         }
//         else
//         {
//             cout << "The book has not been returned " << endl;
//         }
//     }
// };

// int main()
// {
//     Library l("Thinking C++", "Robert", 12314);
//     l.displayDetails();
//     l.borrowed();
//     l.returned();
// }

// Create a class to represent a student with attributes like name, roll number, marks in different subjects, etc. Implement methods to calculate total marks, average marks, and grade

// #include <iostream>
// using namespace std;

// const int MAX_SUBJECTS = 10;

// class Student
// {
// private:
//     string name;
//     string rollNumber;
//     int n;
//     int marks[MAX_SUBJECTS];

// public:
//     Student(string name, string rollNumber)
//     {
//         this->n = 0;
//         this->name = name;
//         this->rollNumber = rollNumber;
//         for (int i = 0; i < MAX_SUBJECTS; i++)
//         {
//             marks[i] = 0;
//         }
//     }

//     void addSubject()
//     {
//         cout << "Enter the number of subject: ";
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             cout << "Enter Subject " << i + 1 << " Marks ";
//             cin >> marks[i];
//         }
//     }

//     void average()
//     {
//         double avg = 0.0;
//         double sum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             sum += marks[i];
//         }
//         avg = sum / n;
//         cout << "Average Marks: " << avg << endl;
//     }

//     void sort()
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (marks[j] < marks[i])
//                 {
//                     int swap = marks[j];
//                     marks[j] = marks[i];
//                     marks[j] = swap;
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << marks[i] << " ";
//         }
//     }
// };

// int main()
// {
//     Student s1("Ahmed Yar", "480756");
//     s1.addSubject();
//     s1.average();
//     s1.sort();
// }

// Design a class to represent a car with attributes like make, model, year, rental price, etc. Implement methods to rent a car, return a car, and display car details.

// #include <iostream>
// using namespace std;

// class CarRental
// {
// private:
//     string make;
//     int year;
//     double price;
//     string model;
//     bool rented;

// public:
//     CarRental(string make, int year, double price, string model)
//     {
//         this->make = make;
//         this->year = year;
//         this->price = price;
//         this->model = model;
//         this->rented = false;
//     }

//     void displayDetails()
//     {
//         cout << "Make: " << make << endl;
//         cout << "year: " << year << endl;
//         cout << "price: " << price << endl;
//         cout << "model: " << model << endl;
//     }

//     void is_rented()
//     {
//         if (!rented)
//         {
//             rented = true;
//             cout << "The car is rented " << endl;
//         }
//         else
//             cout << "The car is not rested " << endl;
//     }

//     void returned()
//     {
//         if (rented)
//         {
//             rented = false;
//             cout << "The car has returned " << endl;
//         }
//         else
//             cout << "The car has not returned " << endl;
//     }
// };

// int main()
// {
//     CarRental car("Toyota", 2005, 200.00, "Latest");
//     car.displayDetails();
//     car.is_rented();
//     car.returned();
// }

// Create a class representing an employee with attributes like name, employee ID, salary, etc. Implement methods for calculating monthly salary, giving raises, and displaying employee details.

// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     string name;
//     string employeeID;
//     int salary;

// public:
//     Employee(string name, string employeeID, int salary)
//     {
//         this->name = name;
//         this->employeeID = employeeID;
//         this->salary = salary;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "EmployeeID: " << employeeID << endl;
//         cout << "Salary: " << salary << endl;
//     }

//     void monthlyRaises(double amount)
//     {
//         salary = salary * (amount / 100);
//     }
// };

// int main()
// {
//     Employee employee("Ahmed", "323", 2334);
//     employee.monthlyRaises(50);
//     employee.display();
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class TimeTable
// {
// private:
//     string day;
//     vector<string> timeslot;
//     vector<string> subject;

// public:
//     TimeTable(string day)
//     {
//         this->day = day;
//     }

//     void add_subject(string timeslots, string subjects)
//     {
//         timeslot.push_back(timeslots);
//         subject.push_back(subjects);
//     }

//     void changeSlot(string oldTime, string newTime, string subjects)
//     {
//         for (size_t i = 0; i < timeslot.size(); i++)
//         {
//             if (timeslot[i] == oldTime)
//             {
//                 timeslot[i] = newTime;
//                 subject[i] = subjects;
//                 return;
//             }
//         }
//     }

//     void displayTimeTable()
//     {
//         cout << "Time table for " << day << endl;
//         for (size_t i = 0; i < timeslot.size(); i++)
//         {
//             cout << "Time Slot: " << timeslot[i] << " - Subject: " << subject[i] << endl;
//         }
//     }
// };
// int main()
// {
//     TimeTable monday("monday");
//     monday.add_subject("9AM - 10 PM", "Mathematics");
//     monday.add_subject("11AM - 12 PM", "Physics");
//     monday.add_subject("12AM - 1 PM", "Mathematics");

//     monday.displayTimeTable();

//     monday.changeSlot("9AM - 10PM", "3PM - 4PM", "Fundamental of Programming");

//     cout << endl;
//     cout << "Updated TimeTable " << endl;
//     monday.displayTimeTable();
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// class TimeTable
// {
// private:
//     string day;
//     vector<string> timeSlot;
//     vector<string> subject;

// public:
//     TimeTable(string day)
//     {
//         this->day = day;
//     }

//     void add_subject(string time_slot, string subjects)
//     {
//         timeSlot.push_back(time_slot);
//         subject.push_back(subjects);
//     }

//     void change_time_slot(string old_slot, string new_slot, string new_subject)
//     {
//         for (int i = 0; i < timeSlot.size(); i++)
//         {
//             if (timeSlot[i] == old_slot)
//             {
//                 timeSlot[i] = new_slot;
//                 subject[i] = new_subject;
//             }
//             else
//             {
//                 cout << "The subject donot exist: " << endl;
//             }
//         }
//     }

//     void display_time_table()
//     {
//         for (int i = 0; i < timeSlot.size(); i++)
//         {
//             cout << "Time: " << timeSlot[i] << " -Subject: " << subject[i] << endl;
//         }
//     }
// };

// int main()
// {
//     TimeTable t1("Monday");

//     t1.add_subject("10AM - 12PM", "English");
//     t1.add_subject("11AM - 1PM", "English");

//     t1.change_time_slot("10AM - 12PM", "13PM - 14PM", "Programming");

//     t1.display_time_table();
// }

// * Funciton overloading in CPP:

// #include <iostream>
// using namespace std;

// class MathsOperations
// {

// public:
//     int add(int num1, int num2)
//     {
//         return num1 + num2;
//     }
//     double add(double num1, double num2)
//     {
//         return num1 + num2;
//     }

//     int subtract(int num1, int num2)
//     {
//         return num1 - num2;
//     }
//     double subtract(double num1, double num2)
//     {
//         return num1 - num2;
//     }

//     int divide(int num1, int num2)
//     {
//         return num1 / num2;
//     }
//     double divide(double num1, double num2)
//     {
//         return num1 / num2;
//     }

//     int multiply(int num1, int num2)
//     {
//         return num1 * num2;
//     }
//     double multiply(double num1, double num2)
//     {
//         return num1 * num2;
//     }
// };

// int main()
// {
//     MathsOperations math;
//     int num1, num2;
//     cout << "Enter the First Number: ";
//     cin >> num1 >> num2;

//     // * Integer Arguments

//     cout << "Addition: " << math.add(num1, num2) << endl;
//     cout << "Subtraction: " << math.subtract(num1, num2) << endl;
//     cout << "Multiplication: " << math.multiply(num1, num2) << endl;
//     cout << "Division: " << math.divide(num1, num2) << endl;

//     // * Floating Point Arguments

//     double num3, num4;
//     cout << "Enter the Number: ";
//     cin >> num2 >> num3;

//     cout << "Addition: " << math.add(num3, num4) << endl;
//     cout << "Subtraction: " << math.subtract(num3, num4) << endl;
//     cout << "Multiplication: " << math.multiply(num3, num4) << endl;
//     cout << "Division: " << math.divide(num3, num4) << endl;

//     return 0;
// }

// Create a class Person with data members name and age. Implement a copy constructor to create a deep copy of a Person object. Test the copy constructor by creating a new object from an existing one and modifying the data of one object to see if changes reflect in the other.

// #include <iostream>
// using namespace std;

// class Person
// {
// private:
//     string name;
//     string age;
//     string gender;

// public:
//     // * Constructor
//     Person(string name, string age, string gender)
//     {
//         this->name = name;
//         this->age = age;
//         this->gender = gender;
//     }

//     // * Setters
//     void set_name(string new_name) { name = new_name; }
//     void set_age(string new_age) { age = new_age; }
//     void set_gender(string new_gender) { gender = new_gender; }

//     // * Getter
//     string get_name() { return name; }
//     string get_age() { return age; }
//     string get_gender() { return gender; }

//     // * Copy Constructor
//     Person(Person &obj)
//     {
//         obj.name;
//         obj.age;
//         obj.gender;
//     }

//     // * Memeber Function
//     void displayInfo()
//     {
//         cout << "Name: " << get_name() << endl;
//         cout << "Age: " << get_age() << endl;
//         cout << "Gender: " << get_gender() << endl;
//     }
// };

// int main()
// {
//     Person p1("Ahmed Yar", "12", "Male");
//     p1.displayInfo();

//     Person p2 = p1;

//     p2.set_name("Umar");
//     p2.set_age("111");
//     p2.set_gender("Female");

//     p2.displayInfo();
// }

// esign a class Rectangle with data members length and width. Include member functions to calculate the area and perimeter of the rectangle. Create multiple objects of Rectangle class and perform operations such as area calculation, changing dimensions, and comparing areas of different rectangles.

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int length;
//     int width;

// public:
//     Rectangle(){};
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }

//     int calc_area()
//     {
//         return length * width;
//     }
//     int calc_perimeter()
//     {
//         return 2 * (length + width);
//     }

//     void compare(Rectangle &obj1, Rectangle obj2)
//     {
//         if ((obj1.length == obj2.length) && (obj1.width == obj2.width))
//         {
//             cout << "The Rectangle are equal " << endl;
//         }
//         else
//             cout << "The are not equal " << endl;
//     }
// };

// int main()
// {
//     Rectangle r1(12, 12);
//     Rectangle r2(20, 20);

//     cout << "Area Rectangle 1" << r1.calc_area() << endl;
//     cout << "Area Rectangle 2" << r2.calc_area() << endl;

//     cout << "Perimeter Rectangle 1" << r1.calc_perimeter() << endl;
//     cout << "Perimeter Rectangle 2" << r2.calc_perimeter() << endl;

//     Rectangle rec;

//     rec.compare(r1, r2);
// }

// * Triangle Comparison

// #include <iostream>
// #include <cmath>

// using namespace std;

// class Triangle
// {
// private:
//     int side1, side2, side3;

// public:
//     Triangle(int side1, int side2, int side3)
//     {
//         this->side1 = side1;
//         this->side2 = side2;
//         this->side3 = side3;
//     }

//     int calc_area()
//     {
//         long double S = (side1 + side2 + side3) / 2.0;
//         long double result = sqrt(S * (S - side1) * (S - side2) * (S - side3));
//         return result;
//     }

//     void compair()
//     {
//         if (side1 == side2 && side2 == side3)
//         {
//             cout << "Equlitral Triange" << endl;
//         }
//         else if (side1 == side2 || side2 == side3 || side1 == side3)
//         {
//             cout << "Isoceles Triangle" << endl;
//         }
//         else
//         {
//             cout << "Scalene Triangle" << endl;
//         }
//     }
// };

// int main()
// {
//     Triangle t1(12, 12, 12);
//     cout << "Area: " << t1.calc_area() << endl;
//     t1.compair();

//     Triangle t2(12, 12, 2);
//     cout << "Area: " << t1.calc_area() << endl;
//     t2.compair();

//     Triangle t3(12, 112, 2);
//     cout << "Area: " << t3.calc_area() << endl;
//     t3.compair();
// }

// ? Extend the Rectangle class to include overloaded constructors for creating rectangles with default dimensions and specific dimensions. Implement a copy constructor to create a copy of a Rectangle object. Test both function overloading and copy constructor by creating and copying objects of the Rectangle class.

// #include <iostream>
// using namespace std;

// class Rectangle
// {
// private:
//     int length;
//     int width;

// public:
//     // * Default Constructor
//     Rectangle()
//     {
//         this->length = 10;
//         this->width = 20;
//     }

//     // * Parameterized Constructor
//     Rectangle(int length, int width)
//     {
//         this->length = length;
//         this->width = width;
//     }

//     // * Setters
//     void set_length(int new_length) { length = new_length; }
//     void set_width(int new_width) { width = new_width; }

//     // * Getters
//     int get_length() { return length; }
//     int get_width() { return width; }

//     // * Member Function
//     int calc_area()
//     {
//         return length * width;
//     }

//     int calc_perimeter()
//     {
//         return 2 * (length + width);
//     }

//     void compare(Rectangle &obj1, Rectangle &obj2)
//     {
//         if (obj1.length == obj2.length && obj2.width == obj1.width)
//         {
//             cout << "The Rectangle are equal " << endl;
//         }
//         else
//             cout << "The Rectangle are not equal " << endl;
//     }

//     // * Copy Constructor
//     Rectangle(Rectangle &obj)
//     {
//         obj.length = length;
//         obj.width = width;
//     }
// };

// // * Driver Program

// int main()
// {
//     Rectangle r1(12, 12);
//     Rectangle r2(122, 122);
//     Rectangle r3;
//     Rectangle r4;

//     cout << "Area of Rectangle 1: " << r1.calc_area() << endl;
//     cout << "Area of Rectangle 2: " << r2.calc_area() << endl;

//     cout << endl;

//     cout << "Perimeter of Rectangle 1: " << r1.calc_perimeter() << endl;
//     cout << "Perimeter of Rectangle 2: " << r2.calc_perimeter() << endl;

//     cout << endl;

//     cout << "Area of Rectangle 3: " << r3.calc_area() << endl;
//     cout << "Perimeter of Rectangle 3: " << r3.calc_perimeter() << endl;

//     r4.compare(r1, r2);
// }

// ? Design a class BankAccount with private data members balance, accountNumber, and accountHolderName. Include member functions to deposit, withdraw, and display account details. Ensure that withdrawal is not allowed if the balance is insufficient. Test the encapsulation by accessing/modifying private members through member functions.

// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     double balance;
//     string accNum;
//     string accHolderName;

// public:
//     BankAccount(double balance, string accNum, string accHolderName)
//     {
//         this->balance = balance;
//         this->accNum = accNum;
//         this->accHolderName = accHolderName;
//     }

//     // * Setters
//     void set_balance(double new_balance) { balance = new_balance; }
//     void set_accNum(string new_accNum) { accNum = new_accNum; }
//     void set_accHolderName(string new_accHolderName) { accHolderName = new_accHolderName; }

//     // * Getters
//     double get_balance() { return balance; }
//     string get_accNum() { return accNum; }
//     string get_accHolderName() { return accHolderName; }

//     // * Member Functions:
//     int deposit(const int &amount)
//     {
//         balance += amount;
//         return balance;
//     }

//     int withdrawl(const int &amount)
//     {
//         if (amount <= balance)
//         {
//             balance -= amount;
//             return balance;
//         }
//         else
//         {
//             cout << "Transaction is not possible " << endl;
//             return 0;
//         }
//     }

//     void display()
//     {
//         cout << "Balance: " << get_balance() << endl;
//         cout << "Account Number: " << get_accNum() << endl;
//         cout << "Holder Name: " << get_accHolderName() << endl;
//     }

//     // * Copy Constructor
//     BankAccount(BankAccount &obj)
//     {
//         obj.balance = balance;
//         obj.accNum = accNum;
//         obj.accHolderName = accHolderName;
//     }
// };

// int main()
// {
//     BankAccount acc_1(1000.00, "123", "Ahmed Yar");
//     cout << " Deposited: " << acc_1.deposit(1000) << endl;
//     cout << "Withdrawl: " << acc_1.withdrawl(500) << endl;
//     acc_1.display();

//     cout << endl;

//     BankAccount acc_2 = acc_1;
//     acc_2.set_balance(5000.00);
//     acc_2.set_accNum("546");
//     acc_2.set_accHolderName("Umar Malik");

//     cout << "Deposited: " << acc_2.deposit(500.5) << endl;
//     cout << "Withdrawl: " << acc_2.withdrawl(200.5) << endl;

//     acc_2.display();
// }

// ? Define a class Counter with a static member variable count and a static member function increment(). Create multiple objects of the Counter class and call the increment() function to increment the count. Display the count after each increment operation

// #include <iostream>
// using namespace std;

// class Counter
// {
// private:
//     static int count;

// public:
//     void counterIncrement()
//     {
//         count++;
//     }
//     int getCounter()
//     {
//         return count;
//     }
// };

// int Counter::count = 0;

// int main()
// {
//     Counter c;
//     for (int i = 0; i < 10; i++)
//     {
//         c.counterIncrement();
//         cout << c.getCounter() << endl;
//     }
// }

// ? Upcasting in CPP:
// * When object of the derived class is called in the base class by using th pointer and the reference in the program this is considerd to be safe because the derived object contain everything of the base class

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     virtual void sound()
//     {
//         cout << "Animal makes sound " << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void sound() override
//     {
//         cout << "Dog barks " << endl;
//     }
//     void wag_tail()
//     {
//         cout << "Dog contain the tail " << endl;
//     }
// };

// int main()
// {
//     Dog mydog;
//     Animal *ptranimal = &mydog;

//     ptranimal->sound(); // (->) Member access through the pointer;
// }

#include <iostream>
using namespace std;

class MyClass
{
public:
    int data;
    void display()
    {
        cout << "Data: " << data << endl;
    }
};

int main()
{
    MyClass obj1;
    obj1.data = 10;
    obj1.display(); // Using the . metod access operator

    MyClass *ptr = &obj1;
    ptr->data = 12; // Using the pointer the member access opertor (->)
    ptr->display();
}