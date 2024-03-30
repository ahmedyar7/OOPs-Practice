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

#include <iostream>
using namespace std;

class MathsOperations
{

public:
    int add(int num1, int num2)
    {
        return num1 + num2;
    }
    double add(double num1, double num2)
    {
        return num1 + num2;
    }
};